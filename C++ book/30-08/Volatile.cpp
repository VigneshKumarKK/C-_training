#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    a++;
    cout <<a <<" ,";
    volatile int b = 0;
    b++;
    cout <<b <<" .";
    return 1;
}