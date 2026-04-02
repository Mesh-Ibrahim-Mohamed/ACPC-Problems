#include <iostream>

using namespace std;

int main()
{
	int N_Times, Number, Number2;

	int A[100005];

	cin >> N_Times;

	for (int i = 0; i < N_Times; i++) 
	{
		cin >> A[i];
	}

	bool isPalindrome = true;

	for (int i = 0; i < N_Times / 2; i++)
	{
		if (A[i] != A[N_Times - 1 - i])
		{
			isPalindrome = false;
			break;
		}
	}
	if (isPalindrome)
	{
		cout << "YES\n";
	}
	else
		cout <<"NO\n";
	

}