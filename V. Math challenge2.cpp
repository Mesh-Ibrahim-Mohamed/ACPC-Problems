//
// Created by eba on 8/27/26.
//

#include <bits/stdc++.h>

#define ll long long
#define Bye return 0;


using namespace std;




void Solve() {
    string S; cin >> S;
    ll Sum = 0 ;

    for (int i = 0 ; i < S.length(); i++) {

        Sum += S[i] - '0';

    }

    if (Sum % 3 == 0) cout << "YES";
    else cout << "NO";



}

int main() {
    Solve();
}