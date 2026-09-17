//
// Created by eba on 9/9/26.
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

void solve() {

    ll N,M ; cin >> N >> M;

    ll Min = min(N,M);

    ll Max = max(N,M);

    ll GCD = gcd(N,M);
    //
    // while ( Max % GCD != 0) {
    //
    //     GCD /= 2;
    //
    // }

    // ll LCM = Max;
    // while (LCM  % Min!= 0) {
    //     LCM *= 2;
    // }

    ll LCM = N * M / GCD;

    cout << GCD << " "<< LCM ;



}

int main() {
    fastIO();
    solve();
    return 0;
}