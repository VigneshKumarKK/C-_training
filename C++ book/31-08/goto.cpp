
#include <iostream>
using namespace std;


int main()
{
	int num;
    cout << "Enter the Number to find it even or odd :::  ";
    cin >> num;
	
    if (num % 2 == 0)
	// jump to even
		goto even;
	else
	// jump to odd
		goto odd;

even:
	cout << num << " is even";
    return 1;

odd:
	cout << num << " is odd";
    return 1;
}
