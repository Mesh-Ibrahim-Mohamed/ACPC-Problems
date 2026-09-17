//
// Created by eba on 9/3/26.
//
#include <bits/stdc++.h>
using namespace std;

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int A[5003];

void solve() {
    int N; cin >> N;

    for (int i = 0 ; i < N; i++) {
        cin >> A[i];
    }

    int Count = 0;
    for (int i = 0 ; i < N; i++) {
        for (int j = i ; j < N; j++) {
            if (i == j) Count++;

            else if (A[j] >= A[j - 1]) Count++;
            else break;
        }
    }
                                    // Trace Code

    cout << Count << endl;
}


int main() {
    fastIO();
  int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

