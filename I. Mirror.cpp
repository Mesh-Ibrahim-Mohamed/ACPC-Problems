//
// Created by eba on 8/25/26.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int N; cin >> N;

    int A[N];

    // Read
    for (int i = 0 ; i < N; i++) {
        cin >> A[i];
    }

    sort(A,A+N);

    for (int i = 0 ; i < N / 2; i++) {
        cout << A[i] << " ";
    }


    for (int i = (N / 2) - 1 ; i >= 0; i--) {
        cout << A[i] << " ";
    }
    cout << endl;

    for (int i = N-1  ; i >= N / 2; i--) {
        cout << A[i] << " ";
    }

    for (int i = N / 2 ; i < N ; i++) {
        cout << A[i] << " ";
    }


    cout << endl;
}