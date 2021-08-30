#include <iostream>
using namespace std;

void series_count()
{
    static int count=0;
    cout <<count <<" ,";
    count++;
}

int main()
{
    int n=10;
    for(int i=0;i<n;i++)
    series_count();
    return 1;
}