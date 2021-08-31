#include <iostream>
using namespace std;

//no space and very difficult to read
void printa()
{
    int a=10,b=20,c=-(a+b)*(a-b);cout<<"TotalA = "<<c<<endl;
}

//good space and very easy to read
void printb()
{
    int a=10 , b=20;
    int c= - ( (a+b) * (a-b) );
    cout <<"TotalB = " <<c <<endl;
}


int main()
{
    printa();

    printb();
    
    return 1;
}