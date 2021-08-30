#include <iostream>
using namespace std;

int namea=10;

int main()
{
    cout <<namea <<" ,";
    //cout <<nameb <<" ,";
    extern int nameb;
    cout <<nameb;
    return 1;
}

int nameb=10;