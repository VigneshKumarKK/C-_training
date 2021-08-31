#include <iostream>
using namespace std;
  
int main()
{
    double x = 1.2;
  
    int sum = (int)x + 1;
  
    cout << "Sum = " << sum <<endl;

     float f = 3.5;
  
    //cast operator
    int b = static_cast<int>(f);
  
    cout <<"B =  " << b;
  
    return 0;
}