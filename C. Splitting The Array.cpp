//
// Created by eba on 7/8/26.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int T, TT;cin >> T >> TT;

    int A[T];

    for (int i = 0 ; i < T; i++) {
        cin >> A[i];
    }

    sort(A,A+T);

    for (int i = 0 ; i <= TT; i++) {
        if (A[i] == TT) continue;
        cout << A[i] << " ";
    }
}