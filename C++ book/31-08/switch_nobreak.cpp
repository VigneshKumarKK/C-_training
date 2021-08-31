
#include <iostream>
using namespace std;

int main()
{
    int number ;

    cout << "Enter number to print from  :: ";
    cin >> number;

    switch (number) 
    {
        case 1:
            cout << "1, ";
        case 2:
            cout << "2, ";
        case 3:
            cout << "3, ";
        case 4:
            cout << "4, ";
        case 5:
            cout << "5, ";
        case 6:
            cout << "6, ";
        case 7:
            cout << "7, ";
        case 8:
            cout << "8, ";
        case 9:
            cout << "9, ";
        case 10:
            cout << "10.";
        default:
            cout <<"Enter only from 1 to 10";
    }

    return 1;
}
