#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int INT_P = 2147483647, INT_M = -2147483647;

	long long n, k, a;

	cin >> n >> k >> a;

	if ((n * k) % a != 0) {
		cout << "double" << endl;
	}


	else {
		long long result = (n * k) / a;

		if (result <= INT_P && result >= INT_M)
			cout << "int\n";

		else
			cout << "long long";

	}
}