#include <iostream>

using namespace std;

int main()
{
	int N, PrimarySum = 0, secondarySum = 0,A[100][100];
	cin >> N;

	for (int i = 0; i < N; i++)
		for(int j = 0; j < N; j++)
			cin >> A[i][j];

	for (int i = 0; i < N; i++)
	{
		PrimarySum += A[i][i];
	}


	for (int i = 0; i < N; i++)
	{
		secondarySum += A[i][N - 1 - i];
	}

	cout <<abs(PrimarySum - secondarySum) << endl;

	return 0;

}