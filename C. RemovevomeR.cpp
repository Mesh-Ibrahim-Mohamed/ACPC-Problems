//
// Created by eba on 6/30/26.
//
#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool has_01 = false;
    bool has_10 = false;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '0' && s[i+1] == '1') {
            has_01 = true;
        }
        if (s[i] == '1' && s[i+1] == '0') {
            has_10 = true;
        }
    }


    if (has_01 && has_10) {
        cout << 1 << "\n";
    }
    else if (has_01 || has_10) {
        cout << 2 << "\n";
    }
    else {
        cout << 1 << "\n";
    }
}

int main() {

    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}