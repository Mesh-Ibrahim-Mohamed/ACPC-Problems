#include <iostream>

using namespace std;

int main() 
{
int N,Number, EVEN = 0,ODD = 0,Negative = 0,postive = 0;

cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> Number;

		if (Number % 2 == 0)
		{
			EVEN++;
		}
		else if (Number % 2 != 0)
		{
			ODD++;
		}
		if (Number < 0)
		{
			Negative++;
		}
		else if (Number > 0)
		{
			postive++;

		}

	}

	cout << "Even: " << EVEN << "\n";
	cout << "Odd: " << ODD << "\n";
	cout << "Positive: " << postive<< "\n";
	cout << "Negative: " << Negative<< "\n";
	
	return 0;


}