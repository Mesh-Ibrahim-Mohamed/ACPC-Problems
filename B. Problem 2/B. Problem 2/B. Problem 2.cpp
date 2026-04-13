#include <iostream>
#include <cmath>

using namespace std;


long long MyPower(int N1, int N2)
{
	long long Power = 1;

	for (int i = 0; i < N2; i++)
	{
		Power *= N1;
	}

	return Power;
}



long long Muultii(int N, int N_T)
{
	long long  Multiplay = 0;

	for (int i = 2; i <= N_T; i = i + 2)
	{
		Multiplay += MyPower(N, i);

	}

	return Multiplay;

}

int main()
{
	int X, N;
	cin >> X >> N;

	cout << Muultii(X, N);
}