#include<iostream>
using namespace std;

int main() {
	int arr[999];
	int N;
	cin >> N;
	bool x = 0;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	cout << arr[0];
	for (int i = 1;i < N;i++) {
		if (arr[i - 1] <= arr[i]) {
			if (arr[i - 1] != arr[i]) {
				cout << arr[i];
			}
		}
		else {
			x = 1; break;
		}
	}
	if (x) cout << "\nthe numbers are not in order";

}

