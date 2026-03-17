#include <iostream>

using namespace std;


enum enOddOrEven { Odd = 1, Even = 2};


int ReadNumber()
{
	int N;

	cout << " Enter Number : ";
	cin >> N;
	
	return N;

}


enOddOrEven CheckOddOrEven(int Number)
{
	if (Number % 2 != 0)
		return enOddOrEven::Odd;
	else
		return enOddOrEven::Even;
}

int SumOddNumbersFrom1ToN_UsingWhile(int N)
{
	int Sum = 0, i = 1;

	while (N >= i)
	{
		if (CheckOddOrEven(i) == enOddOrEven::Odd)
		{
			Sum += i;
		}
		i++;
	}

	cout << "The odd Number  By While Loop= " << Sum << endl;

	return Sum;

}

int SumOddNumbersFrom1ToN_UsingDoWhile(int N)
{
	int Sum = 0,i = 1;

	if (N <= 0) return 0;

	do
	{
		if (CheckOddOrEven(i) == enOddOrEven::Odd)
		{
			Sum += i;
		}
		i++;

	} while (N >= i);

	cout << "The Odd Number By Do While Do Loop = " << Sum << endl;

	return Sum;

}
int SumOddNumbersFrom1ToN_UsingForLoop(int n)
{
	int sum = 0;
	
	for (int i = 0; i <= n; i++)
	{
		{
			if (CheckOddOrEven(i) == enOddOrEven::Odd)
			{
				sum += i;
			}
		}
	}

	cout << "The Odd Numbers is = " << sum << endl;

	return sum;
}



int main()
{
	int n;

	n = ReadNumber();

	SumOddNumbersFrom1ToN_UsingWhile(n);
	SumOddNumbersFrom1ToN_UsingDoWhile(n);
	SumOddNumbersFrom1ToN_UsingForLoop(n);
	return 0;
}

