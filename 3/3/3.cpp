#include <iostream>
#include <algorithm>

using namespace std;

int odds[200005];
int evens[200005];

void solve()
{
	int n;
	cin >> n;

	bool has_even = false;
	bool has_odd = false;

	int e_cnt = 0, o_cnt = 0;

	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x % 2 == 0)
		{
			evens[e_cnt++] = x;
		}
		else
		{
			odds[o_cnt++] = x;
		}

	}

	int i = 0, j = 0;


	while (i < e_cnt && j < o_cnt)
	{
		if (evens[i] < odds[j])
		{
			cout << evens[i++] << " ";
		}
		else
		{
			cout << odds[j++] << " ";
		}
	}

	while (i < e_cnt)
	{
		cout << evens[i++] << " ";
	}

	while (j < o_cnt)
	{
		cout << odds[j++] << " ";
	}

	cout << endl;

}

int main()

{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t = 0;

	cin >> t;

	while (t--)
	{
		solve();
	}

	return 0;
}