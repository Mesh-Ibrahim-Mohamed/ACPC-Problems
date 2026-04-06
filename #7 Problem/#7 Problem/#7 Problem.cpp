#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	long long Fib[55];

	Fib[1] = 0;
	Fib[2] = 1;

	for (int i = 3; i <= N; i++)
	{
		Fib[i] = Fib[i - 1] + Fib[i - 2];
	}

	cout << Fib[N] << endl;

}