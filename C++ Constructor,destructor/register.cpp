#include <iostream>
using namespace std;
//register int global_number;

int power(register int base, register int top)
{
    register int answer=1;
    while(top)
    {
        answer=answer*base;
        top--;
    }
    return answer;
}


int main()
{
    int number;
    int base_value;
    cout <<"ENTER THE BASE VALUE    :::    ";
    cin >> base_value;
    int power_value;
    cout <<"\nENTER THE POWER VALUE   :::    ";
    cin >>power_value;
    number = power(base_value,power_value);
    cout <<"\nOUTPUT   ::::::    ";
    cout <<number;
    return 1;
}