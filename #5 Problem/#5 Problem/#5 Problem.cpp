#include <iostream>

using namespace std;

int main()
{
	char A[1000005];

	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	long long Sum = 0;

	for (int i = 0; i < N; i++)
	{
		Sum += A[i] - '0';

	}

	cout << Sum << "\n";
	

}