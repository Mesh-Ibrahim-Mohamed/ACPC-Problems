#include <bits/stdc++.h>
using namespace std;
#define str string

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    str S;
    cin >> S;

    int Cnt_l = 0, Cnt_r = 0, total_count = 0;

    str Word = "", all_words = "";

    for (int i = 0; i < S.length(); i++) {
        Word += S[i];

        if (S[i] == 'L') {
            Cnt_l++;
        } else {
            Cnt_r++;
        }

        if (Cnt_l == Cnt_r) {

            total_count++;

            all_words += Word + '\n';

            Word = "";
            Cnt_l = 0;
            Cnt_r = 0;
        }
    }

    cout << total_count << '\n';

    cout << all_words;
}

int main() {
    fastIO();
    solve();
    return 0;
}