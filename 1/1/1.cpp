#include <iostream>

using namespace std;

int main()
{

	int N,A,B,C,D;

	cin >> N;

	for (int i = 0; i < N; i++)
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

	cout << endl;

}