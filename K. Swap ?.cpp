//
// Created by eba on 8/25/26.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int Max = -1e9;
    int Min = 1e9;
    int Index_Max = 0, Index_min = 0;


    int N; cin >> N;

    int A[N];
    for (int i = 0 ; i < N; i++) {
        cin >> A[i];
        if (A[i] > Max) {
            Max = A[i];
            Index_Max =i;
        }
        if (A[i] < Min) {
            Min = A[i];
            Index_min = i;
        }

    }
    swap(A[Index_Max],A[Index_min]);

    for (int i = 0 ; i < N; i++) {
        cout << A[i] << " ";
    }

}