// Created by eba on 9/16/26.
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

    ll n; cin >> n ;



    int lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774};


    for (int i = 0; i < 13; i++) {
        if (n % lucky_numbers[i] == 0) {
            cout << "YES\n";
            return;

        }
    }


    cout << "NO";

}

int main() {
    fastIO();
    solve();
    return 0;
}