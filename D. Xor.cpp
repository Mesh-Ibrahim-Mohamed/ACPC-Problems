//
// Created by eba on 9/8/26.
//
#include <bits/stdc++.h>
using namespace std;
#define str string
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

//int freq[256] = {};
//int pre[10000005] ;

ll f(int Q) {
    return (Q- 1 ^ Q - 2);
}

void solve() {

    ll a, b, q;
    cin >> a >> b >> q;

    ll rem = q % 3;

    if (rem == 1) {
        cout << a << "\n";
    }
    else if (rem == 2) {
        cout << b << "\n";
    }
    else if (rem == 0) {
        cout << (a ^ b) << "\n";
    }
    
}


int main() {
    fastIO();
    solve();
    return 0;
}