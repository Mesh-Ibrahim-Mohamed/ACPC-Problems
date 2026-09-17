//
// Created by eba on 8/20/26.
//
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;


pair<long long, long long> arr[200005];


bool compare_mc(pair<long long, long long> a, pair<long long, long long> b) {

    return (b.first * a.second + b.second) > (a.first * b.second + a.second);
}


void Solve() {

    long long n;
    long long x = 1;

    cin >> n;

    for (int i = 0 ; i < n; i++) {

        long long m, c;

        cin >> m >> c;

        arr[i].first = m;
        arr[i].second = c;

    }

    sort(arr, arr + n, compare_mc);

        for (int i = 0 ; i < n; i++) {

            long long m = arr[i].first;

            long long c = arr[i].second;

        x = m * x + c;
    }

    cout << x << "\n";
}

int main() {
    int t ; cin >> t;

    while (t--) {
        Solve();
    }
}