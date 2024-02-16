#include<iostream>
using namespace std;

int main() {
	int arr[999];
	int N;
	cin >> N;
	bool palin = 0;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	for (int i = 0;i < N / 2;i++) {
		if (arr[i] == arr[N - 1 - i]) {
			palin = 1;
		}
		else {
			palin = 0;
			break;
		}
	}
	if (palin) cout << "Yes";
	else cout << "No";

}

