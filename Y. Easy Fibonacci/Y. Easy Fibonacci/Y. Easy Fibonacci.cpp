#include <iostream>

using namespace std;

int main()
{
	int N; cin >> N;
	int arr[100];

	arr[0] = 0; arr[1] = 1;

	for (int i = 2; i < N; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " ";

	}
	return 0;
}