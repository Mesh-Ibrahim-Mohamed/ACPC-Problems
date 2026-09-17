//
// Created by eba on 9/8/26.
//
#include <bits/stdc++.h>
using namespace std;
#define str string
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

//int freq[256] = {};

void solve() {
    str S;cin >> S;

    str Egypt = "EGYPT";
    int Pos = 0;

    for (int i = 0 ; i < S.length(); i++) {
        if (S[i] ==  'E' && S.substr(i,5) == "EGYPT") {


            S.replace(i,5," ");

        }
    }


    cout << S;

}

int main() {
    fastIO();
    solve();
    return 0;
}