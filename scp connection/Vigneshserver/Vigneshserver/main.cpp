#include <iostream>
#include <string>
#include <WS2tcpip.h>
#pragma comment (lib, "ws2_32.lib")
using namespace std;

void main()
{
//winsock setup
	WSADATA wsData;
	WORD ver = MAKEWORD (2, 2);
	int wsOk = WSAStartup(ver, &wsData);
	
	//checking winsock setup and return if fail
	if (wsOk != 0)
	{
		cerr << "Sorry!! Error in setting up winstock" <<endl;
		return;
	}

//create a socket
	SOCKET listening = socket(AF_INET, SOCK_STREAM,0);

	//checking socket setup and return if fail
	if (listening == INVALID_SOCKET)
	{
		cerr << "Sorry!! Error in setting up socket" <<endl;
		return;
	}

//binding socket and ip address
	sockaddr_in hint;
	hint.sin_family = AF_INET;
	hint.sin_port = htons(54000);
	hint.sin_addr.S_un.S_addr = INADDR_ANY;

	bind(listening, (sockaddr*)&hint, sizeof(hint));

//winshock to listening
	listen(listening, SOMAXCONN);

//wait for a connection
	sockaddr_in client;
	int clientSize = sizeof(client);

	SOCKET clientSocket = accept(listening, (sockaddr*)&client, &clientSize);

	char host[NI_MAXHOST]; //clients remote name
	char service[NI_MAXHOST]; //service port client is connect on

	ZeroMemory(host, NI_MAXHOST);
	ZeroMemory(service, NI_MAXHOST);

	//get ip adress an other info
	if (getnameinfo((sockaddr*)&client, sizeof(client), host, NI_MAXHOST, service, NI_MAXSERV, 0) == 0)
	{
		cout << host << "Connected on port " << service << endl;
	}

	else
	{
		inet_ntop(AF_INET, &client.sin_addr, host, NI_MAXHOST);
		cout << host << "Connected on port " << ntohs(client.sin_port) << endl;
	}

//close listening socket
	closesocket(listening);

//main code
	char buf[4096];
	while (true)
	{
		ZeroMemory(buf, 4096);
		//client data 
		int bytesReceived = recv(clientSocket, buf, 4096, 0);
		if (bytesReceived == SOCKET_ERROR)
		{
			cerr << "Error in receving data" << endl;
			break;
		}

		if (bytesReceived == 0)
		{
			cout << "Client offline " << endl;
			break;
		}

		char phone[] = { "phone" };
		send(clientSocket, buf, bytesReceived + 1, 0);
	}

//close client socket
		closesocket(clientSocket);

//close winshock
		WSACleanup();

}