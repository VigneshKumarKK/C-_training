
#include <iostream>
using namespace std;

int callfunction()
{
    return 50.02;
}

int main()
{
    double i,i2,i3,i4;
     i=i2=i3=i4=20.562;

    cout <<"\nI =  " <<i;
    cout <<"\nI2 =  " <<i2;
    cout <<"\nI3 =  " <<i3;
    cout <<"\nI4 =  " <<i4;

    //i=i2=50.25159=i3=i4;
    i=50.251;
    i=i2=i3=i4;

    cout <<"\nI =  " <<i;
    cout <<"\nI2 =  " <<i2;
    cout <<"\nI3 =  " <<i3;
    cout <<"\nI4 =  " <<i4;

    i=350.251;
    i4=i2=i3=i;

    cout <<"\nI =  " <<i;
    cout <<"\nI2 =  " <<i2;
    cout <<"\nI3 =  " <<i3;
    cout <<"\nI4 =  " <<i4;

    return 1;
}