//
// Created by eba on 8/25/26.
//

#include<iostream>
using namespace std;

void Solve() {
    int N; cin >> N;
    string Row1,Row2; cin >> Row1 >> Row2;



    for (int i = 0 ; i < N;i++) {
        if (Row1[i] == 'G') {
            Row1[i]= 'B';
        }
        if (Row2[i] == 'G') {
            Row2[i]= 'B';
        }
    }

    if (Row1 == Row2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {

    int T; cin >> T;
    while (T--) {
        Solve();
    }
}