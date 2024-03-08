#include<iostream>
using namespace std;


void accumulate_arr(int arr[], int len) {
	if (len == 1) return;
	accumulate_arr(arr, len - 1);
	arr[len - 1] += arr[len - 2];


}
int main() {
	int arr[]{ 1,8,2,10,3 };
	accumulate_arr(arr, (int)size(arr));
	cout << "the new array: ";
	for (int i = 0;i < (int)size(arr);i++) {
		cout << arr[i] << " ";
	}

}