//
// Created by eba on 9/8/26.
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

void solve() {
    str S;
    int n;
    cin >> n >> S;

    ll Score = 0;


    for (int i = 0 ; i < S.length(); i++) {

        if (S[i] == 'V') {
            Score +=5;
        }
        else if (S[i] == 'W') {
            Score += 2;
        }
        else if (S[i] == 'X') {
            if (i + 1 < S.length()) {
                i++;
            }
        }
        else if (S[i] == 'Y') {

            if (i + 1 < S.length()) {

                char move = S[i + 1];
                i++;
                S.push_back(move);
            }

        }
        else if (S[i] == 'Z') {
            if (i + 1 < S.length()) {
                if (S[i + 1] == 'V') {
                    Score /= 5;
                    i++;
                }
                else if (S[i + 1] == 'W') {
                    Score /= 2;
                    i++;
                }
            }
        }

    }

cout << Score;

}

int main() {
    fastIO();
    solve();
    return 0;
}