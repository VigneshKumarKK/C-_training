#include <iostream>
using namespace std;
class Demopointer {
private:
	int a;
	char b;
public:
	void setValues(int a, char b) {
		this->a = a;
		this->b = b;
	}
	void displayValues() {
		cout << a << endl;
		cout << b;
	}
};
int main() {
	Demopointer dp;
	dp.setValues(100, 'A');
	dp.displayValues();
	cout << "\n\n\n\n";
	return 0;
}