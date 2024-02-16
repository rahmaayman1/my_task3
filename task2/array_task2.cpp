#include<iostream>
using namespace std;

int main() {
	int arr[200];
	int N;
	cin >> N;
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	int max = -1;
	int min = 10000;
	for (int i = 0;i < N;i++) {
		if (max < arr[i]) {
			max = arr[i];
		}
		if (min > arr[i]) {
			min = arr[i];
		}
	}
	for (int i = 0;i < N;i++) {
		if (arr[i] == max) {
			arr[i] = min;
		}
		else if (arr[i] == min)
		{
			arr[i] = max;
		}
	}
	for (int i = 0;i < N;i++) {
		cout << arr[i] << " ";
	}


}

