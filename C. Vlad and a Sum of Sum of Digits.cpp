//
// Created by eba on 7/6/26.
//
#include <iostream>

using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

void solve() {
    int n;
    cin >> n;

    long long total_sum = 0;

    for (int i = 1; i <= n; i++) {
        total_sum += sumOfDigits(i);
    }

    cout << total_sum << "\n";
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}