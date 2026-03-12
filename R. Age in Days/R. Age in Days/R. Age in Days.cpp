#include <iostream>

using namespace std;

int main()
{
	int days;

	cin >> days;

	int years, months, reminder;

	years = days / 365;
	reminder = days % 365;

	months = reminder / 30;
	reminder = reminder % 30;

	days = reminder;


	cout << years << " years" << endl;
	cout << months << " months" << endl;
	cout << days << " days" << endl;




}