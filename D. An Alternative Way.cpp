//
// Created by eba on 6/30/26.
//
#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];

    vector<long long> d(n);
    for (int i = 0; i < n; i++) {
        d[i] = b[i] - a[i];
    }

    for (int i = n - 1; i > 0; i--) {
        if (d[i] < 0) {
            d[i - 1] += d[i];
            d[i] = 0;
        }
    }

    if (d[0] < 0) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {


    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}