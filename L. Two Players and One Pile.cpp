//
// Created by eba on 8/24/26.
//
#include <iostream>

using namespace std;

void Solve() {
    long N; cin >> N;


    if (N == 1) {
        cout << "-1\n"; return ;
    }

    if (N % 3 == 1) cout << "1\n";
    else  cout << "0\n";
}

int main() {
    int t; cin >> t;
    while (t--) {
        Solve();
    }
}