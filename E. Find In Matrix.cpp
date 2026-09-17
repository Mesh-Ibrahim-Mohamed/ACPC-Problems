//
// Created by eba on 8/25/26.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N,M; cin >> N >> M;
    int A[N][M];

    for (int i = 0 ; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }
    int Find;cin >> Find;


    for (int i = 0 ; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (Find ==  A[i][j] ) {
                cout << "YES";
                return 0;
            }

        }
    }

    cout << "NO";

}