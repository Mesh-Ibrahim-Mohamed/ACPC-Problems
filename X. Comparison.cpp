//
// Created by eba on 9/7/26.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
//int Freq[27] = {};
void solve() {
    string s;
    cin >> s;

    int n = s.length();

    string ans = "";

    if (n < 2) {
        cout << s << "\n";
        return;
    }

    for (int i = 1 ; i < n; i++) {
        string x = s.substr(0, i);
        string y = s.substr(i);

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        string temp = x + y;

        if (ans == "" || temp < ans) {
            ans = temp;

        }
    }
        cout << ans << "\n";
}

int main() {

    fastIO();
    solve();

    return 0;
}