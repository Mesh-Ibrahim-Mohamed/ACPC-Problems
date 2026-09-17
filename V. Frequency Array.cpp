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

int Freq[100005] = {};

void solve(){

    int N , M; cin >> N >> M;

    int Arr[N+1];

    for (int i = 0 ; i < N; i++) {
        cin >> Arr[i];
        Freq[Arr[i]]++;
    }

    for (int i = 1; i <= M;i++ ) {
        cout << Freq[i] << endl;
    }


}
signed main() {
    fastIO();

    solve();
    return 0;
}