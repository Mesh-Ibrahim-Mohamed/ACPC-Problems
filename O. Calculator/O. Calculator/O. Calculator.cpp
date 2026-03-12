#include <iostream>

using namespace std;

int main()
{

	long long a, b;
	char ope;

	cin >> a >> ope >> b;

	if (ope == '+')
	{
		cout << a + b;
	}
	else if (ope == '-')
	{
		cout << a - b;
	}
	else if (ope == '*')
	{
		cout << a* b;
	}
	else if (ope == '/')
	{
		cout << a / b;
	}
	return 0;

}