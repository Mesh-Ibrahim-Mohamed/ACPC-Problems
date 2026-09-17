//
// Created by eba on 8/31/26.
//
#include <bits/stdc++.h>
#define ll long long
#define bye return 0 ;
#define سلام return  ;

using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {

    int N; cin >> N;

    int A[N + 1] ;

    for (int i = 0 ; i < N; i++) {

        cin >> A[i];

    }

    sort(A, A + N);

    for (int i = 1; i < N;  i++) {
        if (A[i] == A [i -1 ]) {
           cout << "NO\n"; سلام
        }
    }
    cout << "YES\n";
}

int main() {
    fastIO();

    int t ; cin >> t;
    while (t--) {

        solve();
    }
    bye;
}