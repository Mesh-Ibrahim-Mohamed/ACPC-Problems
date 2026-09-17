//
// Created by eba on 8/25/26.
//

#include <iostream>

using namespace std;

int main() {
    int N ,T;cin >> N >> T;

    int A[N + 1];

    for (int i = 1 ; i <= N; i++) {
        cin >> A[i];
    }
    int l,r,x;
    while (T--) {
        cin >> l >> r >> x;
        int Cnt = 0;
        for (int i = l ; i <= r; i++) {
            if (x == A[i]) Cnt++;
        }
        cout << Cnt << endl ;
    }

}