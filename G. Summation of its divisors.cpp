//
// Created by eba on 9/9/26.
//

#include <bits/stdc++.h>
using namespace std;
#define str string
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

//int freq[256] = {};
//int pre[10000005] ;

void solve() {

    ll N ; cin >> N;
    ll Cnt = 0;


    for (ll i = 1 ; i * i <= N; i++) {

        if (N % i == 0) {
            Cnt += i;

            if (i != N / i) {
                Cnt += (N / i);
            }
        }
    }

    cout << Cnt ;


    }

int main() {
    fastIO();
    solve();
    return 0;
}