#include <iostream>
using namespace std;

int callfunction()
{
    return 50.02;
}

int main()
{
    double i=10.95159523;
    int i2= i;
    float i3=i;
    char x='f';
    int i4= 'x';
    int j=((10+2)*2);
    int k=callfunction();
    cout <<"\nI =  " <<i;
    cout <<"\nI2 =  " <<i2;
    cout <<"\nI3 =  " <<i3;
    cout <<"\nX =  " <<x;
    cout <<"\nI4 =  " <<i4;
    cout <<"\nJ =  " <<j;
    cout <<"\nK =  " <<k;
    cout <<"\n\n\n";
    double xdouble=20.95;
    int xint1=xdouble;
    float xfloat=xdouble;
    int xint2=xfloat;
    cout <<xdouble <<" ," <<xfloat <<" ," <<xint1 <<" ," <<xint2;
    return 1;
}