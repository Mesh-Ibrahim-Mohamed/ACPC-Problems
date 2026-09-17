//
// Created by eba on 8/16/26.
//

#include <iostream>

using namespace std;

void Solve() {
    int a ,b ,c;cin >> a >> b >> c;

    if (a < c &&  b < c && b > a) cout << "STAIR\n";
    else if (b > a &&  b > c ) cout << "PEAK\n";
    else cout << "NONE\n";
}


int main() {
    int t ;cin >> t;
    while (t--) {
        Solve();
    }
}