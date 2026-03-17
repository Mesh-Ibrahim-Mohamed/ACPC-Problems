#include <iostream> 

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	
	long long sum = 0;

	do {
		cin >> n >> m;

		sum = 0;


		if (n >= m && n > 0 && m > 0)
		{
			for (int i = m; i <= n; i++)
			{
				cout << i << " ";
				sum += i;


			}

			cout << "sum =" << sum << endl;

		}

		if (n < m && n > 0 && m > 0)
		{
			for (int i = n; i <= m; i++)
			{
				cout << i << " ";
				sum += i;


			}

			cout << "sum =" << sum << endl;
		}
	}

	while (n > 0 && m > 0);

	
	








}