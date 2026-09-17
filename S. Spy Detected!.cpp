//
// Created by eba on 8/27/26.
//
#include <bits/stdc++.h>
using namespace std;

int Freq[100005] = {};

void Solve() {

    int A[100005];

    int n ; cin >> n;

     //Fkkkng Read

    for (int i = 0 ; i < n ; i++) {
        cin >> A[i];
        Freq[A[i]]++;
    }

    int Ans = 0;

    for (int i = 0 ; i < n; i++) {
        if (Freq[A[i]] == 1){Ans = i; break;}
    }

    // This Step Optional For TLE 
    for(int i =0;i<n;i++){
        Freq[A[i]] = 0;
    }

    cout << Ans + 1 << endl;

}

int main() {
    int t; cin >> t;

    while (t--) {
        Solve();
    }
}