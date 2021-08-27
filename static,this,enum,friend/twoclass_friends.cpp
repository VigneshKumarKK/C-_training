
#include <iostream>
using namespace std;

class Second;
class First 
{
    
    private:
        int A=10;
        friend int add(First, Second);
};

class Second 
{
  
    private:
        int B=20;
        friend int add(First, Second);
};

int add(First o1, Second o2) 
{
    return (o1.A + o2.B);
}

int main() 
{
    First o1;
    Second o2;
    cout <<"\n\n\n";
    cout << "Answer ==   " << add(o1, o2);
    cout <<"\n\n\n";
    return 0;
}