#include <iostream>
using namespace std;

int main()
{
    bool a=(20<15);
    bool b=(20>15);
    cout <<a <<", " <<b <<endl;

    a=(20>15 && 20<16);
    b=(20>15 || 20<16);
    cout <<a <<", " <<b <<endl; 

    a=(a!=0);
    b=(b!=0);
    cout <<a <<", " <<b;
    return 1; 
}