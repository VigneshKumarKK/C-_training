#include <iostream>
using namespace std;

int main() {
    int number;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> number;

    //total only if you enter + number ,,,, if you enter - it will end the loop
    while (number >= 0) {
        sum += number;
        cout << "Enter a number: ";
        cin >> number;
    }
    cout << "\nThe sum is " << sum << endl;
    
    return 1;
}