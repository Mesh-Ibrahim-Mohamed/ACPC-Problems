#include <iostream>
#include <algorithm>

using namespace std;

int A[1000005];
int B[1000005];

int main()
{
	int N;
	cin >> N;

	

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < N; i++)
	{
		cin >> B[i];
	}

	sort(A, A + N);
	sort(B, B + N);


	bool isSame = true;

	for (int i = 0; i < N; i++)
	{
		if (A[i] != B[i])
		{
			isSame = false;
			break;
		}
	}
	if (isSame == true)
	{
		cout << "yes";
	}
	else
		cout << "no";

	
}
