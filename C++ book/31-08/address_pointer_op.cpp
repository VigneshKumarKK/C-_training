#include <iostream>
using namespace std;

double f(double* x, double* y)
{
    std::cout << "val x: " << *x << "\n";
    std::cout << "val y: " << *y << "\n";
    return ( (*x) * (*y) ):
}
double f2(double &x, double &y)
{
    std::cout << "val x: " << x << "\n";
    std::cout << "val y: " << y << "\n";
    return x * y;
}
int main()
{
    double a, b;
    a = 2;
    b = 3; 
    std::cout << f(&a, &b) << "\n";
    std::cout << f2(a, b) << "\n";
    return 0;
}   