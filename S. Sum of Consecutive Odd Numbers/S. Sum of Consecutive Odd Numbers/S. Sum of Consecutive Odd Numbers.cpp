#include <iostream>

using namespace std;



int main()
{
	int x, y,n,sum = 0; cin >> n;
	for (int k = 0; k < n; k++)
	{
		cin >> x >> y;
		 sum = 0;
		if (x > y)
		{
			for (int i = y + 1 ; i < x; i++)
			{
				if (i % 2 != 0)
				{
					sum += i;
				}
			}
		}

		else if (x < y)
		{
			for (int i = x + 1; i < y; i++)
			{
				if (i % 2 != 0)
				{
					sum += i;
				}
			}
		}
		cout << sum << endl;

	}
	return 0;


}