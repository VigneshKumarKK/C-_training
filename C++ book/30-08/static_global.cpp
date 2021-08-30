#include <iostream>
using namespace std;
static int count;

void series_count()
{
    cout <<count <<" ,";
    count++;
}

void begin(int num)
{
    count=num;
}

int main()
{
    int n=10;
    begin(10);
    for(int i=0;i<n;i++)
    series_count();
    return 1;
}