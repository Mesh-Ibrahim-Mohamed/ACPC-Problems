#include <iostream>

using namespace std;

int main()
{
	char A;
	cin >> A;

	if (A == 'z') { cout << 'a'; return 0; }

	char A1 = A + 1;

	cout << A1;

	return 0;

}