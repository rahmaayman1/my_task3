#include<iostream>
using namespace std;

int main() {
	
	int arr[10], max = arr[0];
	for (int i = 0;i < 10;i++) {
		cout << "enter n" << i + 1 << ":  ";
		cin >> arr[i];
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	cout << max;
}

