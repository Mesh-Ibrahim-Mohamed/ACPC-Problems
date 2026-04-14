#include <iostream>

using namespace std;

int ReadNum()
{
	int N; cin >> N; return N;
}

int SumOfDigits(int Number)
{
	int SumDigit = 0;
	while (Number > 0)
	{	
		SumDigit += Number % 10;
		Number /= 10;
	}
	return SumDigit;
}
int Sumfrom12N(int Number,int A,int B)
{
	int Sum = 0;

	for (int i = 1; i <= Number; i++)
	{
		if (SumOfDigits(i)>= A && SumOfDigits(i)<= B)
		{
			Sum += i;
		}
	}
	
	return Sum;

}

int main()
{
	int A, B, Number;

	Number = ReadNum(); A = ReadNum(); B = ReadNum();


	cout << Sumfrom12N(Number, A, B);
}