#include <iostream>
#include <string>
using namespace std;

int ReadNumber()
{
	int Number;

	cout << "Enter Number: ";
	cin >> Number;
	return Number;

}

float CalculateHalfNumber(int Num)
{

	float Half = Num / 2.00;

	return Half;

}

void PrintResult(int Num)
{
		
	cout << "The Half Of " << Num << " is " << CalculateHalfNumber(Num);

}

int main()
{

	PrintResult(ReadNumber());

}
