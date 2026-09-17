//
// Created by eba on 7/11/26.
//
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;



void solve() {

    string s;cin >> s;

    for (int i = 0; i < s.size();i++) {
        s[i] = toupper(s[i]);
    }

    if (s[0] == 'Y' && s[1] == 'E' && s[2] == 'S') cout << "YES\n";
    else cout << "NO\n";

}


int main() {

int t; cin >> t;

    while (t--) {
        solve();
    }

}
