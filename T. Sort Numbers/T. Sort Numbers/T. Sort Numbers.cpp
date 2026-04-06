#include <iostream>
#include <algorithm>

using namespace std;

long long n, Min_Number[1000005], Minn = 1000005;

int main()
{
	
	int a  , b, c; cin >> a >> b >> c;
	int ora = a, orb = b, orc = c;

	int arr[3] = { a, b, c };

	sort(arr, arr + 3);

	cout << arr[0] << " " << arr[1] << " " <<arr[2] ;
	cout << endl << ora << " " << orb << " " << orc;


	
}