#include<iostream>
using namespace std;

int menu() {
	int choice = -1;
	while (choice == -1) {
		if (true) {
			cout << "menu: \n";
			cout << "1) add 2 numbers.\n";
			cout << "2) subtract 2 numbers. \n";
			cout << "3) multiply 2 numbers. \n";
			cout << "4) divide 2 numbers. \n";
			cout << "5)exit.\n";
		}
		cout << "enter your choice from 1 to 5: ";
		cin >> choice;
		if (!(choice >= 1 && choice <= 5)) {
			cout << "invalid choice, try again \n";
			choice = -1;
		}
	}
	return choice;
}
void read_nums(double& x, double& y) {
	cout << "enter 2 numbers: ";
	cin >> x >> y;
}
void add(double x, double y) {
	cout << "x+y = " << x + y << "\n";
}
void sub(double x, double y) {
	cout << "x-y = " << x - y << "\n";
}
void mul(double x, double y) {
	cout << "x*y = " << x * y << "\n";
}
void div(double x, double y) {
	if (y == 0) {
		cout << "can't divide by zero..";
	}
	else cout << "x/y" << x / y << "\n";
}
int main() {
	double x, y;
	int operations_num = 0;
	while (1) {
		int choice = menu();
		if (choice == 5) break;
		operations_num++;
		read_nums(x, y);
		if (choice == 1) add(x, y);
		else if (choice == 2) sub(x, y);
		else if (choice == 3) mul(x, y);
		else if (choice == 4) div(x, y);
	}
	cout << "number of operations = " << operations_num;
}