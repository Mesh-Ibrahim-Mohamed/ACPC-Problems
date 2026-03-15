#include <iostream>

using namespace std;

int main()
{
	int num;
	cin >> num;

	if (num < 2)
	{
		cout << "NO\n";
		return 0;
	}

	bool isprime = true;


	for (int i = 2; i <= num - 1; i++)
	{
		if (num % i == 0)
		{
			isprime = false;
			break;
		}
	}

	if (isprime)
	{
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}

	return 0;


}