#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

// main class animal
class Animal 
{

   private:
    string color;

   protected:
    string type;

   public:
    void eat() 
    {
        cout << "i am animal , i am eating" << endl;
    }

    void sleep() 
    {
        cout << "I am animal , i am sleeping" << endl;
    }

    void setColor(string color) 
    {
        this->color = color;
    }

    string getColor() 
    {
        return color;
    }
};

// dervied classs dog from animal
class Dog : public Animal 
{

   public:
    void setType(string t) 
    {
        type = t;
    }

    void displayInfo(string c) 
    {
        cout << "I am a " << type << endl;
        cout << "My color is " << c << endl;
    }

    void bark() 
    {
        cout << "wow!! wow!!" << endl;
    }
};

int main() {

    Dog d1;
    cout<<"\n\n\nDOG -- 1 \n\n";
    d1.eat();
    d1.sleep();
    d1.bark();
    d1.setColor("Golden");
    d1.setType("Labarador");
    d1.displayInfo(d1.getColor());
    system("PAUSE");
    system("CLS");

    Dog d2;
    cout<<"\n\n\nDOG -- 2\n\n";
    d2.eat();
    d2.sleep();
    d2.bark();
    d2.setColor("black and Brown");
    d2.setType("German Sheperd");
    d2.displayInfo(d2.getColor());
    system("PAUSE");
    system("CLS");

    return 1;
}