//
// Created by eba on 9/4/26.
//
#include <bits/stdc++.h>
using namespace std;



void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve(){

    int N; cin >> N; 
    
    int A[N],B[N];
    
    for (int i = 0 ; i < N; i++) {
        cin >> A[i];
    }
    
    for (int i = 0 ; i < N; i++) {
        cin >> B[i];
    }
    
    sort(A, A+N);
    sort(B, B+N);

    for (int i = 0 ; i < N; i++) {
        if (A[i] != B[i]) {
            cout << "no"; return;
        }
    }
    cout << "yes";


}
signed main() {
    fastIO();

    solve();
    return 0;
}