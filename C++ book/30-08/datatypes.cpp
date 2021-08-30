#include <iostream>
using namespace std;

int main()
{
    int i=0,j=1,l=10;
    short int si=20;
    signed int sii=-10;
    unsigned int ui=-10;
    double balance=11.23;
    float profit=10.35;
    float loss=balance-profit;
    //double loss=balance-profit;
    bool flaga=2;
    bool flagb=1;
    bool flagc=0;
    bool flagd=-1;

    cout <<i <<" ," <<j <<" ," <<l <<" \n";
    cout <<si <<" ," <<sii <<" ," <<ui <<" \n";
    cout <<balance <<" ," <<profit <<" ," <<loss <<"\n";
    cout <<flaga  <<" ," <<flagb <<" ," <<flagc <<" ," <<flagd <<" \n"; 
    
    return 1;
}