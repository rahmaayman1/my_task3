#include<iostream>
using namespace std;


#include <iostream>
using namespace std;
bool is_palindrome(int arr[], int start, int n) {
	if (start >= n) return true;

	if (arr[start] != arr[n - 1]) {
		return false;
	}
	return is_palindrome(arr, start + 1, n - 1);

}
int main() {
	int arr[]{ 1,7,3,3,7,1 };
	int start = 0;
	if (is_palindrome(arr, start, 6)) {
		cout << "Array is a palindrome ";
	}
	else cout << "Array is not a palindrome";
}