//
// Created by eba on 7/5/26.
//

#include <iostream>

using namespace std;

int main() {
    long long  N;
    cin >> N;
    long long Sum_Number = N*(N + 1) / 2;

    long long Sum_Neg = 0;

    for (int i = 1; i < N; i++) {
        if (N % 2 != 0)
        Sum_Neg+=i;


    }

    cout << Sum_Number - 2 * Sum_Neg;


}
