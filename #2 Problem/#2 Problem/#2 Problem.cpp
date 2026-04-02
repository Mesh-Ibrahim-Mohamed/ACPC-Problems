#include <iostream>

using namespace std;

int main()
{
	int A[1005];
	int N; cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; i++)
	{
		if (A[i] > 0)
		{
			A[i] = 1;
		}
		else if (A[i] < 0)
		{
			A[i] = 2;
		}

	}

	for (int i = 0; i < N; i++)
	{
		cout << A[i] << " ";


	}
	cout << "\n";
}