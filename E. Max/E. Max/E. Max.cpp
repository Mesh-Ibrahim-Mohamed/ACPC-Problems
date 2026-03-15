#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin >> n;


	long long mx = 0;

	for (int i = 1; i <= n; i++)
	{
		long long current;
		cin >> current;

		mx = max(mx, current);
	}


	cout << mx << "\n";



}