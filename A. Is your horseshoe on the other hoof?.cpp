//
// Created by eba on 6/21/26.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A[6];
    cin >> A[0] >> A[1] >> A[2] >> A[3];

    sort(A, A + 4);

    int count_to_buy = 0;

    for (int i = 0; i < 3; i++) {
        if (A[i] == A[i + 1]) {
            count_to_buy++;

        }
    }

    cout << count_to_buy << endl;



}

