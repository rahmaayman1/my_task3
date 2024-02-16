#include<iostream>
using namespace std;

int main() {
	int arr[200];
	int N;
	cout << "enter the length of array: ";
	cin >> N;
	cout << "enter the elements of array: ";
	for (int i = 0;i < N;i++) {
		cin >> arr[i];
	}
	int Q, quer[200];
	cout << "enter the number of queries: ";
	cin >> Q;
	cout << "enter the elements: ";
	for (int i = 0;i < Q;i++) {
		cin >> quer[i];
	}
	int x;
	for (int i = 0;i < Q;i++) {
		for (int j = 0;j < N;j++) {
			if (arr[j] == quer[i]) {
				x = j;
			}
		}
		cout << x << "\n";
	}
}

