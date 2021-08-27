#include <iostream>  
using namespace std; 

class Account {  
   public:  
       int acc_no; 
       string name; 
       static float rateOfInterest;
       

    Account(int acc_no, string name)   
        {    
             this->acc_no = acc_no;    
            this->name = name;    
        }    
    void display()    
        {    
            static int count=1;
            cout <<" \n\nDetails of person " <<count <<endl;
            cout  <<acc_no <<" , " ;
            cout <<name <<" , ";
            cout <<rateOfInterest <<endl;
            count++;   
        }    
};  
float Account::rateOfInterest=6.5;  
int main(void) {  
    Account a1 =Account(199, "Vignesh");    
    Account a2=Account(198, "Rajubai");  
    Account a3=Account(203, "Vijay"); 
    a1.display();    
    a2.display(); 
    a3.display();    
    cout <<"\n\n\n";
    return 1;  
}  