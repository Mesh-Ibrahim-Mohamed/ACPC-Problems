//
// Created by eba on 9/4/26.
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

int Freq[100005] = {};
ll Pre[100005];

void solve(){

    int N; cin >> N;

    int A[N+1];


    for (int i = 0 ; i < N; i++) {
        cin >> A[i];
    }

    for (int i =0 ; i < N; i++) {
        if (A[i] == 0) {
            reverse(A,A+i);
        }
    }

    for (int i =0 ; i < N; i++) {

            cout << A[i] << " ";

    }

}
signed main() {
    fastIO();

    solve();
    return 0;
}