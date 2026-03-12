#include <iostream>

using namespace std;

int main()
{
	long long N, M;

	cin >> N >> M;

	int lastDigit1 = N % 10;
	int lastDigit2 = M % 10;

	int result = lastDigit1 + lastDigit2;

	cout << result << endl;

	return 0;

}