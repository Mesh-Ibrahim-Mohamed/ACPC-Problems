//
// Created by eba on 7/10/26.
//
#include <iostream>
#include <algorithm>

using namespace std;
int A[100005];
int main() {
    int N,K; cin >> N >> K;

    for (int i = 0; i < N ; i++) {
        cin >> A[i];
    }

    int Max = 0;

    for (int i = 0; i < N; i++) {
        int Sum = 0;
        for (int j = 0 ; j < K; j++) {
             Sum += A[i];
            }
        if (Sum > Max) Max = Sum;
        }
        cout << Max - 1;
    }




