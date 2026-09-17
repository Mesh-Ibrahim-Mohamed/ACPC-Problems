// Created by eba on 9/14/26.
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

    ll a, b; cin >> a >> b;

    ll ans = 1;


    if (a == b) {
        cout << 1 ;
        return;
    }



    if (b - a        >= 10) {
        cout << 0 ;
        return;
    }




    for (ll i = a + 1; i <= b; i++) {

        ll lastDigit = i % 10;
        ans*= lastDigit;

    }


    cout << ans % 10;



}

int main() {
    fastIO();
    solve();
    return 0;
}