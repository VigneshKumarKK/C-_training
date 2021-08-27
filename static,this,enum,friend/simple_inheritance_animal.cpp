#include <iostream>
using namespace std;


class Animal 
{

   public:
    void eat() 
    {
        cout << "i am animal , i am eating" << endl;
    }

    void sleep() 
    {
        cout << "I am animal , i am sleeping" << endl;
    }
};

class Dog : public Animal 
{
 
   public:
    void bark() 
    {
        cout << "wow!! wow!!" << endl;
    }
};

int main() 
{
    Dog d1;

    d1.eat();
    d1.sleep();
    d1.bark();

    Dog d2;

    d2.eat();
    d2.sleep();
    d2.bark();

    return 0;
}