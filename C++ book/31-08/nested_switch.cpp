#include <iostream>
using namespace std;
  
int main()
{
    int x = 1, y = 2;
  
    switch (x) {
  

    case 1:
  
  
        switch (y) {
  

        case 2:
            cout << "Choice is 2";
            break;
  

        case 3:
            cout << "Choice is 3";
            break;
        }
        break;
  

    case 4:
        cout << "Choice is 4";
        break;
  
    case 5:
        cout << "Choice is 5";
        break;
  
    default:
        cout << "Choice is other than 1, 2 3, 4, or 5";
        break;
    }
    return 0;
}