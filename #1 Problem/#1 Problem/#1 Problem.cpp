#include <iostream>

using namespace std;

int main()
{
	long  long N_Times, Number,Sum = 0;

	cin >> N_Times;

	for (int i = 0; i < N_Times; i++)
	{
		cin >> Number;

		Sum += Number;
	}

	if (Sum < 0)
		cout << Sum * -1;
	else
		cout << Sum;

	return 0;

}