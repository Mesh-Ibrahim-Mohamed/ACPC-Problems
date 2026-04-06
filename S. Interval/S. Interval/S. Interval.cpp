#include <iostream>
 
using namespace std;

int main()
{
	float N;
	cin >> N;


	if (N >= 0 && N <= 25)
	{
		cout << "Interval [0,25]" << endl;
	}
	else if (N > 25 && N <= 50)
	{
		cout << "Interval (25,50]" << endl;
	}
	else if (N > 50 && N <= 75)
	{
		cout << "Interval (50,75]" << endl;
	}
	else if (N > 75 && N <= 100)
	{
		cout << "Interval (75,100]" << endl;
	}
	else
	{
		cout << "Out of Intervals" << endl;
	}

	cout << endl;
	return 0;

}