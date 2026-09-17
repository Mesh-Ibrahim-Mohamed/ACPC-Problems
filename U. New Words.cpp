#include <bits/stdc++.h>
using namespace std;
#define str string

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int freq[256] = {};

void solve() {
    str S;
    cin >> S;

    int N = S.length();

    for (int i = 0 ; i < N; i++ ) {
        S[i] = tolower(S[i]);
    }

    int Cnt = 0;

    for (int i = 0 ; i < N; i++) {
        if (S[i] == 'e' ||S[i] == 'g' ||S[i] == 'y' ||S[i] == 'p'||S[i] == 't' ) {
            freq[S[i]]++;
        }
    }


    int ans = min({freq['e'], freq['g'], freq['y'], freq['p'], freq['t']});

    cout << ans;



}

int main() {
    fastIO();
    solve();
    return 0;
}