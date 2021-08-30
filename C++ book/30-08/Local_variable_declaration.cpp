#include <iostream>
using namespace std;

void func1()
{
    int x;
    x=1;
}

void func2(int x)
{
    x=100;
}

void fun3()
{
    int i;
    i=0;
    i++;
    int j;
    j=20;
}

int main()
{
    int x=50;
    cout <<"X  =  " <<x <<"\n";
    func2(x);
    cout <<"X  =  " <<x <<"\n";
    func1();
    cout <<"X  =  " <<x <<"\n";
    fun3();
    
    return 1;
}
