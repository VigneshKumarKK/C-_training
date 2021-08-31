#include <iostream>
using namespace std;

int addx(int a, int b)
{
    return a+b;
}

int subx(int a, int b)
{
    return a-b;
}

int mulx(int a, int b)
{
    return a*b;
}

int divx(int a, int b)
{
    return a/b;
}

int remx(int a, int b)
{
    return a%b;
}

int incx(int a)
{
    return a++;
}

int decx(int a)
{
    return a--;
}

int incy(int a)
{
    return ++a;
}

int decy(int a)
{
    return --a;
}

int main()
{
    cout <<addx(5,8) <<endl;

    cout <<subx(8,3) <<endl;
    
    cout <<mulx(5,8) <<endl;

    cout <<divx(15,5) <<endl;

    cout <<divx(15,4) <<endl;

    cout <<remx(15,5) <<endl;

    cout <<remx(15,4) <<endl;

    cout <<incx(5) <<endl;

    cout <<incy(5) <<endl;

    cout <<decx(5) <<endl;

    cout <<decy(5) <<endl;

    int x=10;
    int y=x++;
    int z=++x;

    cout <<y <<" , " <<x << "," <<z;

    return 1; 
    
}