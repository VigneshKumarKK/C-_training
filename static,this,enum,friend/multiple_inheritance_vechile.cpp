#include <iostream>
using namespace std;

class Vehicle {
public:
	Vehicle()
	{
	cout << "This comes under vehicle catgory" << endl;
	}
};

class FourWheeler {
public:
	FourWheeler()
	{
	cout << "This Vehicle has 4 wheels" << endl;
	}
};

class Car: public Vehicle, public FourWheeler 
{
    //nothing
};


int main()
{
	cout<<"\n\n";
	Car obj;
    //the vechile nd four wheel is printed because of constructor
    cout<<"\n\n";
	return 0;
}
