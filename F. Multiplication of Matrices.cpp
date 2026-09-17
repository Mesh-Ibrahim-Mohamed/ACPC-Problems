//
// Created by eba on 9/9/26.
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
//int pre[10000005] ;

void solve() {

    int R_A, C_A, R_B, C_B;

    // إدخال المصفوفة الأولى
    cin >> R_A >> C_A;
    int Matrix_A[R_A][C_A];

    for (int i = 0 ; i < R_A; i++) {
        for (int j = 0 ; j < C_A; j++) {
            cin >> Matrix_A[i][j];
        }
    }

    // إدخال المصفوفة التانية
    cin >> R_B >> C_B;
    int Matrix_B[R_B][C_B];

    for (int i = 0 ; i < R_B; i++) {
        for (int j = 0 ; j < C_B; j++) {
            cin >> Matrix_B[i][j];
        }
    }


    for (int i = 0 ; i < R_A; i++) {

        for (int j = 0 ; j < C_B ; j++) {

            int Sum = 0;

            for (int k = 0; k < C_A; k++) {
                Sum += (Matrix_A[i][k] * Matrix_B[k][j]);
            }
            cout << Sum << " ";
        }
        cout << "\n";
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}