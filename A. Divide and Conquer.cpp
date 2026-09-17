//
// Created by eba on 6/30/26.
//

#include <iostream>

using namespace std;


void solve() {

    int X,Y;

    cin >> X >> Y;

    if (X % Y == 0 ) {
        cout << "YES\n";

    }
    else cout << "NO\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
}
