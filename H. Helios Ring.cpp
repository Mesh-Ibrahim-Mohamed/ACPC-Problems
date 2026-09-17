//
// Created by eba on 8/17/26.
//

#include <iostream>
#include <algorithm>

using namespace std;

void Solve() {
    string S; cin >> S;


    int drop_index = -1;

    int n = S.length();

    int Drops = 0;

    for (int i = 0 ; i < n - 1; i++) {
        if (S[i] > S[i+1]) {
            Drops++;
        }
    }
    if (Drops >  1) cout << -1 << endl ;
    else if (Drops == 0) cout << 0 << endl;
    else if ()

}