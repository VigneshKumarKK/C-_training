#include "pch.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string>
#include "PrintLibrary.h"
#include "PrintSLibrary.h"

using namespace std;

int main()
{
	srand(time(0));
	int random_number = rand();
	int choice;
	string name;
	bool flag=1;
	cout << "\n\n---WELCOME TO LUCKY PRINT WORLD---\n\n";
	cout << "ENTER YOUR NAME  ::::    ";
	getline(cin, name);
	system("CLS");
	while (flag)
	{
		cout << "\n\nHi!! " << name << ", \n\n Are you ready to know your luck????\n\n";
		system("PAUSE");
		system("CLS");
		random_number = rand();
		for (int i = 9; i > 0; i--)
		{
			//cout <<"\n" << random_number <<" , " << i;
			if (random_number % i == 0)
			{
				cout << "\n\n  ";
				printlucky(i);
				break;
			}
		}
		cout << "\n\n\n\n\n\n";
		while (1)
		{
			cout << "\n\nPress 0 to exit \nPress 1 to Do it again\n\n";
			cin >> choice;
			system("CLS");
			if (choice == 1)
				break;
			if (choice == 0)
			{
				flag = 0;
				break;
			}
			cout << " Please enter a valid choice \n";
		}
	}
		system("CLS");
		fnPrintSLibrary();
		system("PAUSE");
		return 0;
}