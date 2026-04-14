#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
	long long n; cin >> n;
	
	int onesCount = 0;

	while (n > 0)
	{
		if (n % 2 == 1) onesCount++;
		n /= 2;

	}

	long long result = 0;

	for (int i = 0; i < onesCount; i++)
	{
		result = result * 2 + 1;
	}
	cout << result << endl;

}

int main()
{
	int t; cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}