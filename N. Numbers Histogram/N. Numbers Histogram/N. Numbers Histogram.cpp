#include <iostream>

using namespace std;

int main()
{
	char S; int N, X[1005];

	cin >> S;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> X[i];
		
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < X[i]; j++)
		{
			cout << S;
		}
		cout << endl;
	}
}