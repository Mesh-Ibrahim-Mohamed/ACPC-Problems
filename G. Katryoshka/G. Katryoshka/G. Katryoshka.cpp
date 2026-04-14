#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	long long n, m, k, katryoshka = 0, take,take2;

	
	cin >> n >> m >> k;

	take = min({ n,m,k });

	katryoshka += take;
	
	n -= take;
	m -= take;
	k -= take;

	
	take2 = min(n / 2, k);

	katryoshka += take2;


	cout << katryoshka << endl;


}