
// objects and class in C++ 
//Create a class room

#include <iostream>
using namespace std;

class Room {

   public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }

};

int main() {

    Room r1;

    r1.length = 100;
    r1.breadth = 50;
    r1.height = 10;

    cout << "Area of the Room =  " << r1.calculateArea() << endl;
    cout << "Volume of the Room =  " << r1.calculateVolume() << endl;
    return 1;
}