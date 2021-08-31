#include <iostream>
using namespace std;
 
int main () {
   int a = 1;
   int skip;
   cout << "Enter number to skip from printing  :  ";
   cin >> skip;


   do 
   {
      if( a == skip) 
      {
         a = a + 1;
         continue;
      }

      cout << "value of a: " << a << endl;
      a = a + 1;
   } 
   while( a < 10 );
 
   return 1;
}