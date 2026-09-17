//
// Created by eba on 6/5/26.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long > a(n),b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    long long sum_b = 0;
    long long max_a = 0;

    for(int i = 0; i < n; i++) {
        long long mx = max(a[i], b[i]);
        long long mn = min(a[i], b[i]);

        sum_b += mx;
        max_a = max(max_a, mn);
    }
    cout << sum_b + max_a << endl;
}
int main() {
    int t ;cin >> t;

    while (t--) {
        solve();
    }
}