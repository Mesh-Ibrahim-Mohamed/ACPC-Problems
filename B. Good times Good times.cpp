//
// Created by eba on 6/30/26.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> good_y;
int mask100[100];
bool valid_mask[1024];



void build_y(long long val, int d1, int d2) {
    if (val > 1e9) return;
    if (val >= 2) good_y.push_back(val);
    if (val > 0 || d1 > 0) build_y(val * 10 + d1, d1, d2);
    if (val > 0 || d2 > 0) build_y(val * 10 + d2, d1, d2);
}



bool isGood(long long n) {
    int mask = 0;

    while (n >= 10) {
        mask |= mask100[n % 100];

        if (!valid_mask[mask]) return false;
        n /= 100;
    }

    if (n > 0) {
        mask |= (1 << n);
        if (!valid_mask[mask]) return false;
    }
    return true;
}


void solve() {
    long long x;
    cin >> x;

    for (long long y : good_y) {
        if (isGood(x * y)) {
            cout << y << "\n";
            return;
        }
    }
    }



int main() {

    for (int i = 0; i < 100; i++) {

        mask100[i] = (1 << (i % 10)) | (1 << (i / 10));
    }
    for (int i = 0; i < 1024; i++) {

        int c = 0;
        for (int j = 0; j < 10; j++) {
            if (i & (1 << j)) c++;
        }
        valid_mask[i] = (c <= 2);
    }

    good_y.reserve(60000);
    for (int i = 0; i <= 9; i++)
        for (int j = i; j <= 9; j++)
            build_y(0, i, j);

    sort(good_y.begin(), good_y.end());
    good_y.erase(unique(good_y.begin(), good_y.end()), good_y.end());
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
