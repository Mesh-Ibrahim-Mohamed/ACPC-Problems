#include <iostream>

using namespace std;

int main()
{
	char A;

	cin >> A;

	if (A >= 'a' && A <= 'z')
	{
		char cs = A - 32;
		cout << cs;

	}

	else if (A >= 'A' && A <= 'Z')
	{
		char CS = A + 32;
		cout << CS;
	}
	return 0;

}