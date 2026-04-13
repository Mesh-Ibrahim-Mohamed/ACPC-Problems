#include <iostream>

using namespace std;

int main()
{
	float After_Discount, Discount;

	cin >> Discount >> After_Discount;

	float Result = After_Discount / (1 - (Discount / 100.00));

	cout << (float) Result;


}