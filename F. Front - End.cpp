//
// Created by eba on 9/5/26.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long


void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// int Freq[100005] = {};
//ll Pre[100005];

void solve(){
    int N;
    cin >> N;
    ll A[N];


    for (int i = 0 ; i < N; i++) {
        cin >> A[i];
    }



    int L = 0 , R = N - 1;

    while (L <= R) {

        if (L == R) {
            cout << A[L] << " ";
            break;
        }

        cout << A[L] << " " << A[R] << " ";
         L++;
         R--;
    }


    cout << "\n";
}
int main() {
    fastIO();

    solve();
    return 0;
}