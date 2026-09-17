//
// Created by eba on 8/25/26.
//

#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    int N; cin >> N;
    int A[N];

    for (int i = 0 ; i < N; i++) {
        cin >> A[i];
    }


    for (int i = 0 ; i < N / 2; i++) {

        if (A[i] != A[N - 1 - i]) {
            cout << "NO"; return 0;
        }


    }
    cout << "YES";
}