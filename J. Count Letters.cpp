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
 int Freq[27] = {};
void solve() {

string S; cin >> S;

    int N = S.length();

    for (int i = 0 ; i < N; i++) {
        Freq[S[i] - 'a']++;
    }

    for (int i = 0 ; i < 27;i++) {
        if (Freq[i] > 0) {
            cout << char( 'a' + i ) << " : "  << Freq[i] << "\n";
        }
    }

}

int main() {

    fastIO();
    solve();

    return 0;
}