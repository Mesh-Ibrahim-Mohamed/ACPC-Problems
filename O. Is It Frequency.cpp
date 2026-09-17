//
// Created by eba on 8/26/26.
//
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int freq[100005] = {};

void Solve() {
    int N,M; cin >> N >> M;

    int A[N+1];

    for (int i = 1 ; i <=N; i++) {
        cin >> A[i];
        freq[A[i]]++;
    }

    for (int i = 1; i <= M; i++) {
        cout << freq[i] << endl;
    }

}

int main() {

    Solve();
}