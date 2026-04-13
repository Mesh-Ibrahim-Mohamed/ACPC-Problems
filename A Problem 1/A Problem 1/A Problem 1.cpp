#include <iostream>

using namespace std;

void Swap(int& A, int& B)
{
	int Temp;

	Temp = A;
	A = B;
	B = Temp;

	cout << A << " " << B;

}

int main()
{
	int A, B;

	cin >> A >> B;

	Swap(A, B);

}