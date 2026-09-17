//
// Created by eba on 8/25/26.
//

#include <iostream>
#include<algorithm>

using namespace std;

int main() {
    int N; cin >> N;
    int A[N][N];

    for (int i = 0 ; i < N; i++) {
        for (int j = 0 ; j < N; j++) {
            cin >> A[i][j];
        }
    }

    int Main_Sum = 0, Sec_Sum = 0;

    for (int i = 0 ; i < N; i++) {

          Main_Sum += A[i][i];
          Sec_Sum += A[i][N-1-i];
    }

    cout << abs(Main_Sum - Sec_Sum);

}