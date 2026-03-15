#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	long long n;
	cin >> n;


	long long original_n = n;
	long long reversed_n = 0;

	while (n > 0)
	{
		int last_digit = n % 10;
		reversed_n = (reversed_n * 10) + last_digit;
		n = n / 10;

	}
	cout << reversed_n << endl;

	if (reversed_n == original_n)
	{
		cout << "YES\n";
	}
	else
	{
		cout << "NO\n";
	}
	return 0;

}