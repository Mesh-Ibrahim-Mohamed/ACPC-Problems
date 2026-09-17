//
// Created by eba on 9/13/26.
//
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define str string
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

//int freq[256] = {};
//ll pre[1000005] ;
//ll a[500005];
//ll last_val[200005];

void solve() {
    string n;
    long long x;
    cin >> n >> x;

    long long rem = 0;

    for (int i = 0; i < n.length(); i++) {

        rem = (rem * 10 + (n[i] - '0')) % x;
    }

    if (rem == 0) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    fastIO();
    solve();
    return 0;
}