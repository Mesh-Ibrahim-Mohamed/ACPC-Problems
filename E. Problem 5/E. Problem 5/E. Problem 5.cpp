#include <iostream>

using namespace std;

void Readarr(int arr[10001], int &N)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}
}

int CalcDistinct(int arr[10001], int N)
{
	int Times = N / 1;

	for (int i = 0; i < N; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			if (arr[i] == arr[j])
			{
				Times --;
				break;
			}
		}
	}
	return Times;
}

int main()
{
	int Arr[10001], N;

	Readarr(Arr, N);

	cout << CalcDistinct(Arr, N);

}

