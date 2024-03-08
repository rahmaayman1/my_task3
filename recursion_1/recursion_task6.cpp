#include<iostream>
using namespace std;


void array_increment(int arr[], int len) {
	if (len == 0) return;
	arr[len - 1] += (len - 1);
	array_increment(arr, len - 1);

}
int main() {
	int arr[]{ 1,8,2,10,3 };
	array_increment(arr, (int)size(arr));
	cout << "the new array: ";
	for (int i = 0;i < (int)size(arr);i++) {
		cout << arr[i] << " ";
	}

}