//
// Created by eba on 9/15/26.
//

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}


ll mul(ll a, ll b,ll m = 10 ) {

    return ((a % m) * (b % m) ) % m;

}

ll ModularExponentiation(ll x, ll n, ll m = 10) {

    ll res = 1;

    while (n > 0) {
        if (n % 2 != 0) {
            res = (res * x )% m ;
        }
        x = mul(x,x);

        n/=2;

    }

    return res;

}



void solve() {

    ll x = 1378;

    ll n ; cin >> n;

   cout <<  ModularExponentiation(x,n);

}


int main() {
    fastIO();
    solve();
    return 0;
}