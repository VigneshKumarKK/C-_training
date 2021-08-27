#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

class staff
{
        int staff_id;
        char name[20];
        float salary;
    public:
        void accept()
        {
                cout<<"\n Enter Staff Id : ";
                cin>>staff_id;
                cout<<"\n Enter Staff Name : ";
                cin>>name;
                cout<<"\n Enter Salary : ";
                cin>>salary;
        }
        void display();
};

void staff::display()
{
        cout<<"\n Staff Id : "<<staff_id;
        cout<<"\n Name : "<<name;
        cout<<"\n Salary : "<<salary<<"\n";
}

int main()
{
    int choice=1;
    staff *s;
    int n;
    cout<<"\n Enter No.of Records You Want : ";
    cin>>n;
    s = new staff[n];
    while(choice!=0)
    {
        cout<<"\n press 1 for Accept Data ";
        cout<<"\n press 2 for Display Data ";
        cout<<"\n press 0 for Exit: ";
        cin>>choice;
        system("CLS");
        switch(choice)
        {
            case 1:
                for(int i=0; i<n; i++)
                {
                    cout<<"\n\n Enter Data for Employee " <<(i+1) <<"\n";
                    s[i].accept();
                }
                break;

            case 2:
                for(int i=0; i<n; i++)
                {
                    s[i].display();
                }
                break;

            case 0:
                system("CLS");
                exit(0);

            default:
                cout<<"\n Invalid Choice !!!!   retry again !!!";
        }
    }
        return 1;
}