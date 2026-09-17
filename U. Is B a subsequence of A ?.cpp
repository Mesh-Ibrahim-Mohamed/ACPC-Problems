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
    int A[N], B[M];

    for (int i = 0 ; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0 ; i < M; i++) {
        cin >> B[i];
    }


    int j = 0;

   for (int i = 0 ; i < N;i++) {

           if (A[i] == B[j] && j < M) {
               j++;
           }
   }

    if (j == M) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }



}
signed main() {
    fastIO();

    solve();
    return 0;
}