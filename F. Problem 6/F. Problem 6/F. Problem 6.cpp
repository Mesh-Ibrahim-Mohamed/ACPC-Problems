#include <iostream>

using namespace std;
int arr1[10001], arr2[10001], arr3[20002], N;


void ReadArray(int arr1[], int arr2[], int& N)
{
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr1[i];
	}
	
	for (int i = 0; i < N; i++)
	{
		cin >> arr2[i];
	}

}

void Concatenation(int arr1[], int arr2[], int N)
{
	int C[20001];

	for (int i = 0; i <  N; i++)
	{
		C[i] =  arr2[i] ;
	}

	for (int i = 0; i < N; i++)
	{
		C[i + N] = arr1[i ];
	}



	for (int i = 0; i < 2 * N; i++)
	{
		cout << C[i] << " ";
	}
}

int main()
{
	
	ReadArray(arr1, arr2, N);
	Concatenation(arr1, arr2,  N);
}