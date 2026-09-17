//
// Created by eba on 6/21/26.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int A[25][25];

    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> A[i][j];
        }
    }


    int i = 0,  j = 0;
    int r = 0, c = 0;

    int Counter;

    for ( i = 1; i <= 5; i++) {
        for ( j = 1; j <= 5; j++) {
            if (A[i][j] == 1) {
                r = i;
                c = j;
            }
        }

    }

    Counter = abs(r - 3) + abs(c - 3);
    cout << Counter ;

}