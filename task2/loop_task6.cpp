#include<iostream>
using namespace std;

int main() {
	int N; cin >> N;
	double even = 0;
	double odd = 0;
	int even_count = 0;
	int odd_count = 0;
	int i = 1;
	while (i <= N)
	{
		double num;
		cin >> num;
		if (i % 2 == 0)
		{
			even += num;
			even_count++;
		}
		else
		{
			odd += num; odd_count++;
		}
		i++;
	}
	cout << even / even_count << " " << odd / odd_count;

}

