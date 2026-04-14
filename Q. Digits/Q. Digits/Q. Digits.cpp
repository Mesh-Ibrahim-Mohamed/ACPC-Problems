#include <iostream>

using namespace std;

int main()
{
	int N;
	long long Number;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> Number;

		do
		{
			cout << Number % 10 << " "; Number = Number / 10;
		}while (Number > 0);

		cout << "\n";

	}

	return 0;
}