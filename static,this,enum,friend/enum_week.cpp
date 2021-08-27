#include <iostream>
using namespace std;

enum week { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int main()
{
    week day;

    day = Sunday;
    cout << "Day " << day;
    day = Monday;
    cout << ", Day " << day;
    day = Tuesday;
    cout << ", Day " << day;
    day = Wednesday;
    cout << ", Day " << day;
    day = Thursday;
    cout << ", Day " << day;
    day = Friday;
    cout << ", Day " << day;
    //day=Saturday;
    cout << ", Day " << day+1;

    day=Monday;
    cout << ", Day " << day+6;
    return 1;
}