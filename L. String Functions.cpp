//
// Created by eba on 9/8/26.
//
#include <bits/stdc++.h>
using namespace std;
#define str string

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int freq[256] = {};

void solve() {
    str S;
    int n, q;
    cin >> n >> q;
    cin >> S;

    str order;
    int l, r;

    while (q--) {
        cin >> order;

        if (order == "pop_back") {
            S.pop_back();
        }
        else if (order == "front") {
            cout << S.front() << '\n';
        }
        else if (order == "back") {
            cout << S.back() << '\n';
        }
        else if (order == "sort") {
            cin >> l >> r;
            int mn = min(l, r) - 1;
            int mx = max(l, r) - 1;
            sort(S.begin() + mn, S.begin() + mx + 1);
        }
        else if (order == "reverse") {
            cin >> l >> r;
            int mn = min(l, r) - 1;
            int mx = max(l, r) - 1;
            reverse(S.begin() + mn, S.begin() + mx + 1);
        }
        else if (order == "print") {
            int pos;
            cin >> pos;
            cout << S[pos - 1] << '\n';
        }
        else if (order == "substr") {
            cin >> l >> r;
            int mn = min(l, r) - 1;
            int mx = max(l, r) - 1;

            cout << S.substr(mn, mx - mn + 1) << '\n';
        }
        else if (order == "push_back") {
            char x;
            cin >> x;
            S.push_back(x);
        }
    }

}

int main() {
    fastIO();
    solve();
    return 0;
}