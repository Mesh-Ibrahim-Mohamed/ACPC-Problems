#include  <iostream>
#include <cmath>

using namespace std;

int main()
{
	long long a, b, c, d;

	cin >> a >> b >> c >> d;

	double first = b * log(a), second = d * log(c);

	if (first > second)
	{
		cout << "YES\n";
	}
	else
		cout << "NO\n";

}