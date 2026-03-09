#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	const double  PI = 3.141592653;
	 double  R;

	cin >> R;

	double  Area = PI * pow(R, 2);

	cout <<fixed << setprecision(9) <<Area << endl;

	return 0;


}