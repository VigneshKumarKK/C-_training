#include <iostream>
using namespace std;

int callfunction()
{
    return 50;
}

int main()
{
    int i=10;
    int j=((10+2)*2);
    int k=callfunction();
    cout <<"\nI =  " <<i;
    cout <<"\nJ =  " <<j;
    cout <<"\nK =  " <<k;
    return 1;
}