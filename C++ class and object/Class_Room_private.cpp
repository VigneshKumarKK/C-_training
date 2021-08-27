#include <iostream>
using namespace std;

class Room {

   private:
    double length;
    double breadth;
    double height;

   public:

    // function to initialize private variables
    void setData(double l, double b, double h) {
        length = l;
        breadth = b;
        height = h;
    }

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }
};

int main() {

    Room r1;
    r1.setData(40, 30, 20);

    Room r2;
    r2.setData(50, 50, 25);

    cout<< "\n\nRoom 1 Data is displaying" << endl;
    cout << "Area of the Room =  " << r1.calculateArea() << endl;
    cout << "Volume of the  Room =  " << r1.calculateVolume() << endl;
    cout<< "\n\nRoom 2 Data is displaying" << endl;
    cout << "Area of the Room =  " << r2.calculateArea() << endl;
    cout << "Volume of the  Room =  " << r2.calculateVolume() << endl;
    cout <<"\n\n";

    return 1;
}