#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long n;

	cin >> n;
	if (n < 2)
	{
		cout << -1 << "\n";
		return 0;
	}

	for (long i = 2; i <= n; i += 2)
	{

		cout << i << "\n";
	}

	return 0;



}