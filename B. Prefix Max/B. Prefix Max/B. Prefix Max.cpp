#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

long long calculate_valu(int n, vector<int> a)
{
	long long total_sum = 0;
	int current_max = 0;

	for (int i = 0; i < n; i++)
	{
		if (a[i] > current_max) {
			current_max = a[i];
		}
		total_sum += current_max;

	}
	return total_sum;

}


void solve()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	long long max_result = calculate_valu(n, a);

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
		{
			swap(a[i], a[j]);
			max_result = max(max_result, calculate_valu(n, a));

			swap(a[i], a[j]);
		}
	}
	cout << max_result << endl;


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;



}