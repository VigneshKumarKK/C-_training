#include <iostream>  
using namespace std;  

int main()  
{  
  int test[3][3];  //declaration   

    test[0][0]=1;     
    test[0][1]=5; 
    test[0][2]=4;  
    test[1][0]=5;  
    test[1][1]=2;
    test[1][2]=9;  
    test[2][0]=6;  
    test[2][1]=7;  
    test[2][2]=9; 

    cout<<"\n==============================\n\n";
    //print  
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout << test[i][j] <<" ";  
        }  
        cout<<"\n";
    }  
    cout<<"\n==============================\n";
    return 0;  
} 