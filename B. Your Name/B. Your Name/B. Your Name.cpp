#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

	int Q;

	cin >> Q;

	while (Q--)
	{
		int letters = 0; string F_N, L_N;
		 
		cin >> letters;

		cin >> F_N >> L_N;

		sort(F_N.begin(), F_N.end());

		sort(L_N.begin(), L_N.end());
	
		if (F_N == L_N)
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