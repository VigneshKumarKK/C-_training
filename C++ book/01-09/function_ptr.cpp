#include <iostream>  
using namespace std;  

int add(int a , int b)  
{  
    return a+b;  
}  
int main()  
{  
 int (*fptr)(int,int);   
 fptr=add; 
 int sum=fptr(7,13);  

 std::cout << "value of sum is :" <<sum<< std::endl;  
  return 0;  
} 