#include<iostream>
using namespace std;

int max(int arr[]) {
	int max_num = arr[0];
	for (int i = 0;i < 6;i++) {
		if (arr[i] > max_num) {
			max_num = arr[i];
		}
	}
	return max_num;
}
int main()
{
	int nums[6];
	cout << "enter 6 numbers: ";
	for (int i = 0;i < 6;i++) {
		cin >> nums[i];
	}
	cout << "max number is: " << max(nums);

}

