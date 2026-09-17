//
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

void solve() {


    ll id ; cin >> id;

    ll row = id / 4;
    ll col;


    if (row % 2 == 0) {

        col = id % 4;
    } else {

        col = 3 - (id % 4);
    }

    cout << row << " " << col << "\n";
}

int main() {
    fastIO();
    solve();
    return 0;
}