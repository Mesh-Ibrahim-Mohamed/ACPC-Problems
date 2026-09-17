// Created by eba on 9/16/26.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}

void solve() {
    
    ll x[4];
    
     cin >> x[0] >> x[1] >> x[2];

    sort(x,x+3);

    ll Ans = (x[0] - x[2] ) ;

    cout << abs(Ans);



}

int main() {
    fastIO();
    solve();
    return 0;
}