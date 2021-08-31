#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int string[5]={10,12,14,16,18};

    int i=5;

    while(i)
    {
        i--;
        cout << string[i] <<" ,";
    }

    return 1;
}