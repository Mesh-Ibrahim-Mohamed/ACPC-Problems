//
// Created by eba on 6/21/26.
//

#include <iostream>

using namespace std;

int main() {
    int A[4],N;
    cin >> N;

    int Sum = 0, Agrees = 0;

    for (int j = 0 ; j < N; j++) {
        cin >> A[0] >> A[1] >> A[2];

        Sum =  A[0] + A[1] + A[2];

        if (Sum >= 2 ) Agrees++;

        Sum = 0;
    }

    cout << Agrees;


}