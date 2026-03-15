#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;


	bool isprime = true;

	if (n < 2)
	{
		isprime = false;
		
	}



	for (int i = 1; i <= n - 1 ; i++)
	{
		if (n % i == 0)
		{
			isprime = false;
			cout << i << endl;
		}

		
	}


	for (int j = 1; j <= n; j++)
	{
		if (!isprime)
		{
			cout << j << endl;
		}


	}



	



}