#include<iostream>
using namespace std;

bool Is_prime(int num) {
	if (num <= 1)
		return false;
	for (int i = 2;i < num;i++) {
		if (num % i == 0)
			return false;
	}
	return true;
}

void nth_prime(int n) {
	for (int i = 0;i < n;i++) {


		if (Is_prime(i)) {
			cout << i << " ";
		}
	}

}
int main() {
	int num;
	cout << "enter the number: ";
	cin >> num;
	nth_prime(num);
}
