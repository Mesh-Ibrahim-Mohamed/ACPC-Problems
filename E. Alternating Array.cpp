//
// Created by eba on 9/6/26.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int N;
    cin >> N;
    int A[N];

    int Cnt_Miuns = 0;
    int Cnt_Plus = 0;

    for (int i = 0 ; i < N; i++) {
        cin >> A[i];
    }


    for (int i = 0 ; i < N; i++) {


        if (i % 2 == 0) {

            if (A[i] < 0) Cnt_Plus++;

            if (A[i] > 0) Cnt_Miuns++;
        }

        else {

            if (A[i] > 0) Cnt_Plus++;

            if (A[i] < 0) Cnt_Miuns++;
        }
    }


    cout << min(Cnt_Plus, Cnt_Miuns) ;
}

int main() {

    fastIO();
    solve();

    return 0;
}