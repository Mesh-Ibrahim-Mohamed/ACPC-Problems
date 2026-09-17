//
// Created by eba on 8/16/26.
//
#include <iostream>
#include <algorithm>

using namespace std;

void Solve() {
    int arr[100006];

    int N; cin >> N;

    for (int i = 0 ; i < N; i++) {
        cin >> arr[i];
    }


    int K = 0;
    for (int i = 0 ; i < N - 1; i++) {
        if (arr[i] != arr[i+1]) {
            K++;
        }
    }
    cout << K + 1 ;

}

int main() {

    Solve();
}