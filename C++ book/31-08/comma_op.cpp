#include <iostream>
using namespace std;

int main()
{
    int x;
    int y;

    x=(y=1,y+2);

    cout <<"x = " <<x <<", " <<"Y =  " <<y <<endl;

    return 1;
}