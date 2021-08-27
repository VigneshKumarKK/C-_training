// Multilevel Inheritance
#include <iostream>
using namespace std;


class Vehicle
{
    public:
	    Vehicle()
	    {
	        cout << "This comes under vehicle catgory" << endl;
	    }
};

class fourWheeler: public Vehicle
{   
    public:
	    fourWheeler()
    	{
	        cout << "This Vehicle has 4 wheels" << endl;
	    }
};

class Car: public fourWheeler
{
    public:
	    Car()
	    {
	        cout <<"my name is car" <<endl;
	    }
};

int main()
{
	cout<<"\n\n";
	Car obj;
    //the vechile nd four wheel is printed because of constructor
    cout<<"\n\n";
	return 0;
}
