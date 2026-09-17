// Created by eba on 9/14/26.
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

void printDigits(ll n) {
    if (n < 10) {
        cout << n << " ";
        return;
    }
    printDigits(n / 10);
    cout << (n % 10) << " ";
}

void solve() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        printDigits(n);
        cout << "\n";
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}