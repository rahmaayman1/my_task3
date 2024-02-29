#include<iostream>
using namespace std;

string reverse_str(const string& str)
{
	string arr = str;
	int st = 0, end = (int)str.size() - 1;
	while (st < end) {
		char rev = arr[end];
		arr[end] = arr[st];
		arr[st] = rev;
		st++;end--;
	}
	return arr;


}

int main() {
	string x;
	cout << "enter the string: ";
	cin >> x;
	cout << reverse_str(x) << "\n";
	cout << reverse_str("abcd") << "\n";

	return 0;
}
