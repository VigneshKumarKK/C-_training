#include <iostream>
using namespace std;

struct student {
    int age;
    float cost;
};
  
int main()
{
    struct student* emp = NULL; //pointer of struct

    struct student e;//creating static struct e

    emp = (struct student*)malloc(sizeof(struct student)); //dynamic struct emp
    
    //. (DOT) is used to refer the struct inside variable (mostly for static creation of struct)
    e.cost=2000.250; 
    e.age=25;

    //-> (arrow) is used to refer the struct inside variable (only for pointer) (mostly for dynamic and pointer creation of struct)
    emp->cost=1050.20;
    emp->age = 18;
  
    cout<< emp->age <<" ,";
    cout <<e.age <<" ,";

    cout<< emp->cost <<" ,";
    cout <<e.cost;

    return 1;
}