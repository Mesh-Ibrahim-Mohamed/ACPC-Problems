#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double N;

	cin >> N;

	float decimal = int(N) - N;

	if (N / int(N) == 1)
	{
		cout <<"int " << int(N);
	}
	else
	{
		cout << "float " << int(N) << " " << decimal * - 1;
	}
}