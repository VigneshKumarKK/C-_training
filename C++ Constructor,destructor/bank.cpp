#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

using namespace std;

class bank
{
    int acnobank;
    char namebank[50];
    char actypebank[30];
    float balancebank;  
    public:
        bank(int acno, char *name, char *actype, float balance)  
        {
                acnobank=acno;
                strcpy(namebank, name);
                strcpy(actypebank, actype);
                balancebank=balance;
                //cout<< "Constructor";
        }
        void deposit();
        void withdraw();
        void display();
};
void bank::deposit()   
{
        int dep_amt;
        cout<<"\n Enter Deposit Amount = ";
        cin>>dep_amt;
        balancebank=balancebank+dep_amt;
         cout <<"\nThe amount of " <<dep_amt <<" is deposited and balance is " <<balancebank <<endl;
}
void bank::withdraw() 
{
        int withdraw_amt;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>withdraw_amt;
        if(withdraw_amt>balancebank)
            cout<<"\nCannot Withdraw Amount\n Sorry!!! Amount Insuffient";
        else
        {
             balancebank=balancebank-withdraw_amt;
             cout <<"\nThe amount of " <<withdraw_amt <<" is withdrawn and balance is " <<balancebank <<endl;
        }
       


}
void bank::display()  
{
        cout<<"\n Accout No. : "<<acnobank;
        cout<<"\n Name : "<<namebank;
        cout<<"\n Account Type : "<<actypebank;
        cout<<"\n Balance : "<<balancebank;  
}

int main()
{
        int acno;
        char name[100], actype[100];
        float balance;

        cout<<"\n\n Accout No. ";
        cin>>acno;
        cout<<"\n\n Name : ";
        cin>>name;
        cout<<"\n\n Account Type : ";
        cin>>actype;
        cout<<"\n\n Balance : ";
        cin>>balance;
  
        bank b1(acno, name, actype, balance);

        int choice;
        system("CLS");
        while(1)
        {
            cout <<" Enter 1 for deposit \n Enter 2 for Withdraw \n Enter 3 for Display info \n Enter 0 for exit";
            cin >>choice;
            system("CLS");
            if(choice==1)  
                b1.deposit();
            else if(choice==2) 
                b1.withdraw(); 
            else if(choice==3) 
                b1.display();
            else
            {
                system("CLS");
                break;
            }
            system("PAUSE");
            system("CLS");    
        }
        cout <<"\n\nThank you for using Bank app\n\n\n";
        return 1;
}