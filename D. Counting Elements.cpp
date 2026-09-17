//
// Created by eba on 9/6/26.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int Freq[100005] = {};
//ll Pre[100005];

void solve(){

    int N; cin >> N;
    int A[N];
    int Cnt = 0;


    for (int i = 0 ; i < N; i++) {
        cin >> A[i];
        Freq[A[i]]++;
    }


    for (int i = 0 ; i < N; i++) {

        if (Freq[A[i] + 1] > 0) {
            Cnt++;
        }
    }

    cout << Cnt << "\n";
}
int main() {
    fastIO();

    solve();
    return 0;
}