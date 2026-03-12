#include <iostream>

using namespace std;

int main()
{
	int A, B;
	double result;

	cin >> A >> B;


	if (A > B)
	{
		result = A % B;
	}
	else
	{
		result = B % A;
	}


	if (result == 0)
	{
		cout << "Multiples" << endl;
	}
	else
	{
		cout << "No Multiples" << endl;
	}
	return 0;


}