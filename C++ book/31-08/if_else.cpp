// C++ If else statement
#include <iostream>
using namespace std;

int main()
{
    double a,b,f;
    cout << "Enter number to divide a and b" << endl;
    cin >> a;
    cin >> b;

    if(b != 0)
    {
        f=a/b;
        cout << f;
    }
    else
    {
        cout << "MathError!!";
    }
    return 1;

}