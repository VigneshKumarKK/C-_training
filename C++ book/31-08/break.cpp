
// CPP program to illustrate
// Linear Search
#include <iostream>
using namespace std;
 
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int size = 6; 
    int key = 3;
 
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == key) 
        {
            cout << "Element found at position: " << (i + 1);
            break;
        }
    }
    return 1;
}