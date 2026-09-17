//
// Created by eba on 9/2/26.
//
#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int A[5003];

void solve() {
    int N; cin >> N;

    for (int i = 0 ; i < N; i++) {
        cin >> A[i];
    }

    int Cnt = 0;
    bool allEven = true;

    while (allEven) {

        for (int i = 0 ; i < N; i++) {
            if (A[i] % 2 != 0) {
                allEven = false;
                break;
            }
        }
        if (allEven) {
            for (int i = 0; i < N; i++) {
                A[i] = A[i] /        2;
            }
            Cnt++;
        }
    }

    cout << Cnt << "\n";
}


int main() {
    fastIO();
    solve();
    return 0;
}