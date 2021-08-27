#include<iostream>
using namespace std;

class student
{
	private:
		char name[20], phone[12];
		int roll, mark;

	public:
		student()
		{
			cout << "\n\nStudent Details called (constructor)" << endl;
		}
		~student()
		{
			cout << "\n\nStudent Detail Closed (destructor)" << endl;
		}
		void get_student_data();
		void display_student_data();
};

void student::get_student_data()
{
	cout << "\nEnter student Name =  ";
	cin >> name;
	cout << "\nEnter student roll no =  ";
	cin >> roll;
	cout << "\nEnter the student phone number =  ";
	cin >> phone;
	cout << "\nEnter student mark out of 1200 =  ";
	cin >> mark;
}

void student::display_student_data()
{
	cout << "\nLet Display the data you have enter\n";
	cout << "\nStudent Named as " << name;
	cout << " with Roll no as " << roll << ".";
	cout << " Contact him with phone and his number is " << phone;
	cout << " and convey his mark. The mark obtained by him is " << mark;
}


int main()
{
	student s;
	s.get_student_data();
	system("CLS");
	s.display_student_data();
	return 0;
}