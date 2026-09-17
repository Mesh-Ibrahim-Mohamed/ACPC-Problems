//
// Created by eba on 9/7/26.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
//int Freq[27] = {};
void solve() {


    int n ; cin >> n;

    while (n--) {
        str S,T; cin >> S >> T;

        int length = S.length()+T.length();

        int l = 0, r = 0;

        while(l < S.length()  && r < T.length() ) {

            cout << S[l] << T[r] ;
            l++;
            r++;
        }

        while (l < S.length()) {
            cout << S[l] ;
            l++;
        }
        while (r < T.length()) {
            cout << T[r];
            r++;
        }

        cout << "\n";
    }

    
}

int main() {

    fastIO();
    solve();

    return 0;
}