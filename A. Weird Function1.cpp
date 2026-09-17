//
// Created by eba on 8/29/26.
//
#include <bits/stdc++.h>

#define ll long long
#define Bye return 0;

using namespace std;


long long f(long long x) {
    return 2 * x + 3;
}


void Solve() {

    long long x;

    cin >> x;

    long long ans = f(f(f(x))) + 2 * f(x * f(x));

    cout << ans << "\n";
}

int main() {

    Solve();

    Bye
}
