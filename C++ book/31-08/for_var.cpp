#include <iostream>
using namespace std;

int prompt ()
{
    cout <<"\n\nEnter the Number : ";
    return 0;
}

int readnum ()
{
    int t;
    cin >> t;
    return t;
}

int sqrnum(int num)
{
    cout << (num * num);
    return (num*num) ;
}

int main()
{
    int t;
    
    for(prompt();t=readnum();prompt())
    sqrnum(t);

    return 1;
}