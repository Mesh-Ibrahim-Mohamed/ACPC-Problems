//
// Created by eba on 5/25/26.
//
#include <iostream>
using namespace std;

void Printn21(int n ) {
    if (n==0)return;

    if (n == 1) cout << n ;
    else
    cout << n << " ";
    Printn21(n - 1);
}
int main() {
    int n;cin >> n;
    Printn21(n);
}