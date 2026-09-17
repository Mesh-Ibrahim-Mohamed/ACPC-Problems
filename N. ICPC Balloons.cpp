//
// Created by eba on 8/26/26.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void Solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int freq[26] = {};

    int Cnt = 0;

    for (int i = 0 ; i < n; i++) {
        freq[s[i] - 'A']++;

        if (freq[s[i] - 'A'] == 1 ) Cnt+=2;
        else  Cnt++;

    }

    cout << Cnt << endl;
}

int main() {
    int t ; cin >> t;

    while (t--) {
        Solve();
    }
}