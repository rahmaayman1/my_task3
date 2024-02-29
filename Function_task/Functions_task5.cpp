#include<iostream>
using namespace std;

void set_powers(int arr[], int len = 5, int m = 2) {
	arr[0] = 1;
	for (int i = 1;i < len;i++) {

		arr[i] = m * arr[i - 1];
	}

}
int main() {
	int arr[100];
	int len, m;
	cout << "enter the length: ";
	cin >> len;
	cout << "enter the basis: ";
	cin >> m;
	set_powers(arr, len, m);
	for (int i = 0;i < len;i++) {
		cout << arr[i] << " ";
	}

}