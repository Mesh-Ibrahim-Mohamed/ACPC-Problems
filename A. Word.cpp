//
// Created by eba on 8/16/26.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void Solve() {
    string S;
    cin >> S;

    int Cnt = 0;

    for (int i = 0; i < S.length(); i++) {
        if (isupper(S[i])) {
            Cnt++;
        }
    }

    if (Cnt > S.length() / 2 ) {
        for (int i = 0 ; i < S.length();i++) {
         S[i] =  toupper(S[i]);
        }
    }
    else {
        for (int i = 0 ; i < S.length();i++) {
            S[i] = tolower(S[i]);
        }
    }
    cout << S;
}

int main() {
    Solve();
}