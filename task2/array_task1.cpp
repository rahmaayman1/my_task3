#include<iostream>
using namespace std;

int main() {
	int arr[100];
	int N;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	bool increase = 1;
	for (int i = 1;i < N;i++) {
		if (arr[i] < arr[i - 1]) {
			increase = 0;
		}
	}
	if (increase) {
		cout << "Yes";
	}
	else
		cout << "No";


}

