#include <iostream>

using namespace std;

int main()
{
	int a, b, c; char op1, op2;

	cin >> a >> op1 >> b >> op2 >> c;

	if (op1 == '+' && op2 == '=')
	{
		if (a + b == c)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << a + b << endl;
		}
	}


	else if (op1 == '-' && op2 == '=')
	{
		if (a - b == c)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << a - b << endl;
		}
	}
	else if (op1 == '*' && op2 == '=')
	{
		if (a * b == c)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << a * b << endl;
		}
	}
	else if (op1 == '/' && op2 == '=')
	{
		if (a / b == c)
		{
			cout << "Yes" << endl;
		}
		else
		{
			cout << a / b << endl;
		}
	}

	return 0;
}

