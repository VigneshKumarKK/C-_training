// Hierarchical Inheritance
#include <iostream>
using namespace std;

class Vehicle
{
public:
	Vehicle()
	{
	cout << "I am vechicle" << endl;
	}
};


class Car: public Vehicle
{
public:
	Car()
	{
    	cout << "I am Car" << endl;
	}
};

class Bus: public Vehicle
{
public:
	Bus()
	{
		cout << "I am Bus" << endl;
	}
};

class Animal
{
public:
	Animal()
	{
	cout << "I am Animal" << endl;
	}
};


class Tiger: public Animal
{
	public:
    Tiger()
	{
		cout << "I am Tiger" << endl;
	}
};

class Lion: public Animal
{
	public:
	Lion()
	{
		cout << "I am Lion" << endl;
	}
};

class Elephant: public Animal
{
	public:
	Elephant()
	{
		cout << "I am Elephant" << endl;
	}
};



int main()
{
	cout <<"\n\n";
	Car o1;
    cout <<"\n\n";
	Bus o2;
    cout <<"\n\n";
    Lion o3;
    cout <<"\n\n";
    Tiger o4;
    cout <<"\n\n";
    Elephant o5;
    cout <<"\n\n";

	return 1;
}
