#include<iostream>
using namespace std;

class electric_bill
{
	private:
		int customer_no;
		char customer_name[20];
		int units;
		double bill;
	public:
		void get_input()
		{
			cout << "\n\n----Enter Details of Customer----\n\n" << endl;
			cout << "Enter Customer No.  =    ";
			cin >> customer_no;
			cout << "\nEnter Customer Name  =    ";
			cin >> customer_name;
			cout << "\nEnter No. of Units used by him  =    ";
			cin >> units;
		}

		void display()
		{
			cout << "\nThe Customer ";
			cout << customer_name << " with Customer No. ";
			cout << customer_no << " spends a electricity of " << units;
			cout << " units " << "has to pay Rs. " << bill;
		}

		void calculate()
		{
			if (units <= 100)
				bill = units * 1;
			else if (units <= 300)
				bill = (100 * 1.5) + ((units - 100) * 2);
			else
				bill = (100 * 1.5)+ (200 * 2)+ ((units - 300) * 3);
		}
};

int main()
{
	electric_bill b1;
	b1.get_input();
	b1.calculate();
	cout << "\n\n\n";
	b1.display();
	cout << "\n\n\n";
	
	return 0;
}