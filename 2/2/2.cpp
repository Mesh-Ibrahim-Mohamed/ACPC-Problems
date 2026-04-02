#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int N, n;
	string s1, s2;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> n;
		cin >> s1 >> s2;

		sort(s1.begin(), s1.end());

		sort(s2.begin(), s2.end());
		
		if (s1 == s2)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}

	return 0;

}