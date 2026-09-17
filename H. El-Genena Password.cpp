//
// Created by eba on 8/13/26.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void Solve() {

    string S;
    cin >> S;

    for (int i = 0 ; i < S.length() ;i++) {
        for (int j = i + 1; j < S.length();j++) {
        int N1 = S[i] - '0',  N2 = S[j] - '0';
            if (N1> N2 && N1 != 0 && N2 != 0) {
                S[i] = (N2 - 1 ) + '0';
                swap(S[i],S[j]);
            }

        }
    }

    cout << S;
}

int main() {
     int t ; cin >> t;

    while (t--) {
        Solve();
    }
}