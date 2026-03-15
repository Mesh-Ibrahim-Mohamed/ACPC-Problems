#include <iostream>

using namespace std;

int main()
{

	long Password = 1999;
	long User_input;

	cin >> User_input;
	
	while (User_input != Password)
	{
		cout << "Wrong" << "\n";
		cin >> User_input;
	}

	cout << "Correct" << "\n";
	
	return 0;



}