#include <iostream>

using namespace std;

void findarea(double side)
{
	double area_value;
	area_value = side * side;
	cout << "\nThe Area of square = " << area_value;
}

void findperimeter(double side)
{
	double perimeter_value;
	perimeter_value = side * 4;
	cout << "\nThe Perimeter of square = " << perimeter_value;
}

int main()
{
	//cout<<"Hello World";
	double input;
	cout << "Enter the side lenght of the Square to find area and perimeter\n";
	cin >> input;
	cout << "\n";
	findarea(input);
	findperimeter(input);
	return 0;
}