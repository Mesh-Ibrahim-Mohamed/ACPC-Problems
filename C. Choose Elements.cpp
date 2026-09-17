//
// Created by eba on 9/5/26.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fileIO() {
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
    freopen("Error.txt","w",stderr);
#endif
}
void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// int Freq[100005] = {};
 ll Pre[100005];

void solve(){

  int  n , k; cin >> n >> k;

    ll A[n+1];

    for (ll i = 0 ; i < n; i++) {
        cin >> A[i];
    }
    sort(A,A+n);
    reverse(A,A+n);

    ll Sum = 0;

    for (ll i = 0  ; i < k; i++) {
        if (A[i] > 0)
        Sum += A[i];
    }

    cout << Sum ;

}
int main() {
    fastIO();

    solve();
    return 0;
}