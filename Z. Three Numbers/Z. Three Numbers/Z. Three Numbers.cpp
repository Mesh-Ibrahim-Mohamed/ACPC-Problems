#include <iostream>

using namespace std;



int main(){

	int k, s;
	cin >> k >> s;
	int counter = 0;

	for (int i = 999; i <= s; i++)
	{
		for (int j = 0; j <= s; j++)
		{
			for (int l = 0; l <= s; l++) 
			{
				if (i >= 0 && j>=0 && l >= 0 && i<=k && j<=k && l<=k && i+j+l == s){
					counter++;
				}
			}
		}
	}
	cout << counter;
	return 0;
}