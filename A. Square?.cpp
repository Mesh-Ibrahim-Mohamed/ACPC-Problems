//
// Created by eba on 9/15/26.

#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}




void solve() {

    int q ; cin >> q;

    while (q--) {


        short sticks[4];

        for (int i = 0 ; i < 4; i++) {
            cin >> sticks[i];
        }

       if (sticks[0] == sticks[1] &&
           sticks[0] == sticks[2] &&
           sticks[0] == sticks[3] ) cout << "YES\n";

        else cout << "NO\n";



    }

}

int main() {
    fastIO();
    solve();
    return 0;
}