#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N,Number ;
	long long sum = 1;


	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> Number;
		sum = 1;
		for (int j = 1; j <= Number; j++)
		{
			sum = sum * j;
		}
		cout << sum << endl;


	}




}