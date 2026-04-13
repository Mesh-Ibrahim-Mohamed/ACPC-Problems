#include <iostream>

using namespace std;

int main() {

	int A, B; char op;

	cin >> A >> op >> B;

	if (A > B && op == '>') cout << "Right";
	else if(A < B && op == '<') cout << "Right";
	else if(A == B && op == '=') cout << "Right";
	else cout << "Wrong";
}