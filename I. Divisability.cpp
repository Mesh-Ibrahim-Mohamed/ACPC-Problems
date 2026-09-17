//
// Created by eba on 9/12/26.
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
//ll pre[1000005] ;
//ll a[500005];
//ll last_val[200005];

ll getSum(ll n, ll x) {

    ll Cnt = n / x;

    return x * Cnt *(Cnt + 1) / 2;
}


void solve() {
   ll a, b, x; cin >> a >> b >> x;


    ll l = min(a,b), r = max(a,b);



    ll totalSum = getSum(r, x) - getSum(l - 1, x);

    cout << totalSum ;

}

int main() {
    fastIO();
    solve();
    return 0;
}