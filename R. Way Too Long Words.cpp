//
// Created by eba on 8/27/26.
//
#include <bits/stdc++.h>
using namespace std;

void Solve() {

    string S; cin >> S;

    if (S.size() > 10) {
        cout << S[0] << S.length() - 2<< S[S.length() - 1] << endl;
    }
    else cout << S << endl;
}

int main() {
    int t; cin >> t;

    while (t--) {
        Solve();
    }
}