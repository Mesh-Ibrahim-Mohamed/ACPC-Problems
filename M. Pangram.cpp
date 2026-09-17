//
// Created by eba on 8/25/26.
//

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    int n ; cin >> n;

    string S; cin >> S;

if (S.length() < 26) {cout << "NO"; return 0;}

    for (int i =0; i < n; i++) {
        S[i] = tolower(S[i]);
    }

    string Alphapet = "abcdefghijklmnopqrstuvwxyz";

    sort(S.begin(),S.end());
    S.erase(unique(S.begin(), S.end()), S.end());

    if (Alphapet == S) cout << "YES";
    else cout << "NO";

}