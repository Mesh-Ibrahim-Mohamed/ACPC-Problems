// Created by eba on 9/14/26.
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
    string s;
    cin >> s;

    int l = 0;
    int r = s.length() - 1;

    while (l < r) {

        if (s[l] == '?' && s[r] == '?') {
            s[l] = 'a';
            s[r] = 'a';
        }
        else if (s[l] == '?') {
            s[l] = s[r];
        }
        else if (s[r] == '?') {
            s[r] = s[l];
        }

        else if (s[l] != s[r]) {
            cout << -1 << "\n";
            return;
        }
        l++;
        r--;
    }


    if (l == r && s[l] == '?') {
        s[l] = 'a';
    }

    cout << s << "\n";
}

int main() {
    fastIO();
    solve();
    return 0;
}