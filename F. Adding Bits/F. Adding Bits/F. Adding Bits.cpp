#include <iostream>

using namespace std;

int main()
{
		
	unsigned int A, B;

	cin >> A >> B;

	unsigned int result = ~A ^ ~B;

	cout << result ;

	return 0;

}