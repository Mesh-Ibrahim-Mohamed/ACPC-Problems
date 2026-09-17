//
// Created by eba on 8/27/26.
//
#include <bits/stdc++.h>
using namespace std;

int Freq[100005] = {};

void Solve() {
    int A[6][6];

    int Target_i = 3, Target_j = 3;
    int Current_i = 1 , Current_j = 1;

    for (int i = 1 ; i <= 5; i++) {
        for (int j = 1 ; j <= 5; j++) {
            cin >> A[i][j];
            if (A[i][j] == 1) {
                Current_i = i;Current_j = j;
            }
        }
    }

 int Result = abs(Current_i - Target_i) + abs(Current_j - Target_j);

    cout << Result;

}

int main() {
    int t;
    //cin >> t;
    t = 1;
    while (t--) {
        Solve();
    }
}