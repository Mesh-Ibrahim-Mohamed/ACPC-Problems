#include <iostream>
#include <cmath>

using namespace std;


int ReadNumber()
{
	int Number; cin >> Number; return Number;
}

bool Isprime(int Number)
{
	if (Number <= 1)
	{
		return false;
		
	}

	for (int i = 2; i <= sqrt(Number); i++)
	{
		if (Number % i == 0)
			return false;
	}
	return true;


}

void PrintPrime(int Number)
{
	for (int i = 2; i <= Number; i++)
	{
		if (Isprime(i))
			cout << i << " ";
	}
}

int main()
{
	int Read;

	Read = ReadNumber();

	PrintPrime(Read);

}