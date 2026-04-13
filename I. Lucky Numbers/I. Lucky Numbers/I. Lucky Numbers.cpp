#include <iostream>

using namespace std;

int main()

{
	int N,Num_Module,Num_Devide;

	cin >> N;

	Num_Module = N % 10; Num_Devide = N / 10;

	if (Num_Module % Num_Devide == 0 || Num_Devide % Num_Module == 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;


}