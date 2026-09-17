//
// Created by eba on 9/17/26.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    if (n == 0) {
        cout << 0 << "\n";
        return;
    }

    int max_size = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            max_size++;
        }
    }

    cout << max_size  ;
}

int main() {
    fastIO();
    solve();
    return 0;
}