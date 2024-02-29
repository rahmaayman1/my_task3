#include<iostream>
using namespace std;

int enter_array(int arr[]) {
	int len;
	cout << "enter the length of array: ";
	cin >> len;
	cout << "enter the elements of array: ";
	for (int i = 0;i < len;i++)
		cin >> arr[i];
	return len;
}
string Is_palind(int arr[], int n) {
	int st = 0, en = n - 1;
	while (st < en) {
		if (arr[st] != arr[en]) {
			return "false";
		}
		st++; en--;
	}
	return "true";

}
int main() {
	int arr[99];
	int length = enter_array(arr);
	cout << Is_palind(arr, length);

}