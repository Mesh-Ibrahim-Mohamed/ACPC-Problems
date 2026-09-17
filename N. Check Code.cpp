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

void solve() {
    int A,B; cin >> A >> B;

    string S ; cin >> S;

    if (S[A] != '-') {
        cout << "No\n";
        return;
    }

    int length = A + B + 1;
        for (int i = 0; i < length ; i++) {
                if (i == A) continue;

            if (!isdigit(S[i] ) ) {
                    cout << "No"; return;

            }
        }


    cout << "Yes";
    }


int main() {
    fastIO();
    solve();
    return 0;
}