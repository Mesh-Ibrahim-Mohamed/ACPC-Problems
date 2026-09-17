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

    int Q , N; cin >> Q;

    while (Q--) {
        int Count_Even = 0, Count_ODD = 0;

        cin >> N;




        int A[N + 1];

        for (int i = 0 ; i < N ; i++) {
            cin >> A[i];
            if (A[i] % 2 == 0) Count_Even++;
            else Count_ODD++;
        }

        if (N % 2 != 0) {
            cout << -1 << "\n";
        }
        else {
            cout << abs(Count_Even - Count_ODD) / 2 << "\n";
        }
    }
}
int main() {
    fastIO();

    solve();
    return 0;
}