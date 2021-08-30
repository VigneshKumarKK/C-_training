#include <iostream>
using namespace std;
int x=50;
void func1()
{
    x=1;
}

void func2(int x)
{
    x=100;
}

int main()
{
    cout <<"X  =  " <<x <<"\n";
    func2(x);
    cout <<"X  =  " <<x <<"\n";
    func1();
    cout <<"X  =  " <<x <<"\n";
    
    return 1;
}
