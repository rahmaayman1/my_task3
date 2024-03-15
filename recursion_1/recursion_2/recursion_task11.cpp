#include<iostream>
using namespace std;


#include <iostream>
using namespace std;
int Prefix_sum(int arr[], int len, int N) {
	int sum = 0;
	if (N == 0) return 0;
	else {
		sum = arr[N - 1] + Prefix_sum(arr, len - 1, N - 1);
		return sum;
	}
}
int main() {
	int arr[]{ 1,3,4,6,3 };
	int N;
	cout << "enter N: ";
	cin >> N;
	cout << "the sum of the first " << N << " numbers= " << Prefix_sum(arr, 5, N);
}


