//
// Created by eba on 8/20/26.
//
#include <iostream>

using namespace std;

int main() {
    long long n; cin >> n;

    if(n % 5 == 0 && n % 3 == 0) cout << "BOTH";
    else if(n % 5 == 0) cout << "FIVE";
    else if(n % 3 == 0) cout << "THREE";
    else cout << "NEITHER";
}