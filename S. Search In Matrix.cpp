//
// Created by eba on 9/4/26.
//
#include <bits/stdc++.h>
using namespace std;


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

void solve(){
    int N,M;cin >> N >> M;
    int A[N][M];

    for (int i = 0 ; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    int X;
    cin >> X;
    for (int i = 0 ; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if ( X ==  A[i][j]) {
                cout <<  "will not take number";
                return;
            }
        }
    }

    cout << "will take number";



}
signed main() {
    fastIO();

    solve();
    return 0;
}