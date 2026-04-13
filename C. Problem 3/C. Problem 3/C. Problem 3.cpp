#include <iostream>

using namespace std;

void ReadArray(int& n, int& x, int arr[10001])
{
	cin >> n >> x;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
}



void PrintShiftedArray(int n, int x, int arr[])
{
	x %= n;
	
	for (int i = n - x; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < n - x; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;

}

int main()
{
	int n, x, arr[10001];

	ReadArray(n, x, arr);

	PrintShiftedArray(n, x, arr);
}
	