#include <iostream>

using namespace std;

int main()
{
	int A, B, C, D, N;

	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> A >> B >> C >> D;
			
		if (A == B && A == C && A == D && A >= 1)
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