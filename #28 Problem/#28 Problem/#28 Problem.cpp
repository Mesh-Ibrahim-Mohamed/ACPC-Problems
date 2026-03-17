#include <iostream>

using namespace std;

int ReadNumber()
{
	int N;

	cout << "Enter Number: " << endl;
	cin >> N;

	return N;

}

void PrintSumOddNumbersWithForLoop(int N)
{
	int sum = 0;

	for (int i = 1; i <= N; i += 2)
	{
		sum = sum + i;

	}
	cout << sum << endl;

}

void PrintSumOddNumbersWithDoWhileLoop(int N)
{
	int Sum = 0,i = 1;

	if (N < 1) { cout << "Do-While Sum: 0" << endl; return; }


	do {  Sum  += i; i += 2;}

	while (N >= i);
	cout <<Sum<<endl;

}

void PrintSumOddNumbersWithWhileLoop(int N)
{
	int sum = 0,i = 1;

	while (N >= i)
	{

		sum += i;
		i += 2;
	}
	cout << sum << endl;
}



int main()
{
	int N;

	N = ReadNumber();

	PrintSumOddNumbersWithForLoop(N);
	PrintSumOddNumbersWithDoWhileLoop(N);
	PrintSumOddNumbersWithWhileLoop(N);


	return 0;

}