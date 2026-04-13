#include <iostream>

using namespace std;

void repateChar()
{
	int N; char C;

	cin >> N >> C;

	for (int i = 0; i < N; i++)
	{
		cout << C << " ";
	}
}

void repatetimes()
{
	int T;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		repateChar(); cout << endl;
	}
}

int main()
{

	repatetimes();

}