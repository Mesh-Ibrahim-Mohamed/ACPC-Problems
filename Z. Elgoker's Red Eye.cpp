#include <bits/stdc++.h>
using namespace std;

bool is_pal[5003][5003];

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void Anthoer_solve() {
    string s;
    cin >> s;
    int n = s.size();


        for(int i = 0; i < n; i++) {

        int l = i, r = i;
        while(l >= 0 && r < n && s[l] == s[r]) {
            is_pal[l][r] = true;
            l--;
            r++;
        }

        l = i, r = i + 1;
        while(l >= 0 && r < n && s[l] == s[r]) {
            is_pal[l][r] = true;
            l--;
            r++;
        }
    }

    int q;
    cin >> q;
    while(q--) {
        int L, R;
        cin >> L >> R;

        L--;
        R--;

        if(is_pal[L][R]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}


bool is_Pal[5003][5003];

void solve() {
    string s; cin >> s;

    int n = s.size();

    // دا لو نفس الحرف يعني بالندروم ال a = a
    for (int i = 0 ; i < n; i++) {
        is_Pal[i][i] = true;
    }

    for (int i = 0 ; i < n - 1; i++) {
        if (s[i] == s[i + 1]) is_Pal[i][i+1] = true;
        else is_Pal[i][i+1] = false;
    }

    // الأطوال الفردية
    for (int i = 1; i <  n ; i++) {
        int l = i, r = i ;

        while (l >= 0 && r < n  && s[l] == s[r]) {
            is_Pal[l][r] = true;

            l--;
            r++;
        }
    }

    // الأطوال الزوجية
    for (int i = 0 ; i < n - 1 ; i++) {
        int l = i, r = i + 1 ;

        while (l >= 0 && r < n  && s[l] == s[r]) {
            is_Pal[l][r] = true;

            l--;
            r++;
        }

    }


    int q ; cin >> q;

    while (q--) {
        int l , r ; cin >> l >> r;

        l--;
        r--;

        if (is_Pal[l][r]) cout << "YES\n";
        else cout << "NO\n";

    }
}

int main() {
    fastIO();
    solve();
    return 0;
}