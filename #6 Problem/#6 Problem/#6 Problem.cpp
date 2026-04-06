#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int Numbers[10005];

	int N;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> Numbers[i];
	}

	int min_index = min_element(Numbers, Numbers + N) - Numbers;
	int max_index = max_element(Numbers, Numbers + N) - Numbers;

	swap(Numbers[min_index], Numbers[max_index]);

	for (int i = 0; i < N; i++)
	{
		cout << Numbers[i] << " ";
	}
	cout << endl;

}