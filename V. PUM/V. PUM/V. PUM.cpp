#include <iostream>

using namespace std;

int main()
{
	int N; cin >> N;

	int counter = 1;

	for (int i = 1; i <= N; i++)
	{
		cout << counter << " " << counter + 1 << " " << counter + 2 << " PUM" << endl; 
		counter += 4;
	}

}