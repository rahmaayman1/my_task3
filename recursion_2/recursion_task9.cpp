#include<iostream>
using namespace std;


#include <iostream>
using namespace std;
void left_max(int arr[], int len, int start_position = 0) {
	int maxi;
	int i = 0;
	if (len == 1) return;
	//maxi=max(arr[len - 1], arr[len-2]);
	else {
		left_max(arr, len - 1);
		maxi = max(arr[len - 1], arr[len - 2]);
		arr[len - 1] = maxi;
	}
}
int main() {
	int arr[]{ 1,3,5,7,4,2 };
	left_max(arr, 6);
	for (int i = 0;i < 6;i++) {
		cout << arr[i] << " ";
	}

}