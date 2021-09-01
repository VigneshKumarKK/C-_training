#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

  int* ptr ;
  ptr= (int*) malloc(sizeof(int));

  *ptr = 5;

  cout << *ptr;

  return 0;
}
