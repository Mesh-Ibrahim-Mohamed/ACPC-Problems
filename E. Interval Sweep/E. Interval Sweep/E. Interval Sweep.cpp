#include <iostream>

using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	
	if (a == 0 && b == 0) {
		cout << "NO\n"; return 0;
	}

	int result = abs(a - b);

	if (result == 0 || result == 1)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}