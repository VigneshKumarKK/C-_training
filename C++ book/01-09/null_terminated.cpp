#include<iostream>
using namespace std;
int main() 
{
   string my_string = "This is a sample text";
   cout << my_string << endl;
   my_string = "This is a sam\0ple text"; //check the \0
   cout << my_string;
}