//
// Created by eba on 9/13/26.
//
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define str string
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

//int freq[256] = {};
//ll pre[1000005] ;
//ll a[500005];
//ll last_val[200005];

// void solve() {
//
//  string s; cin >> s;
//
//
//     ll Cnt_r = 0, Cnt_l = 0;
//
//     for (int i = 0 ; i < s.length(); i++) {
//         if (s[i] == '(')Cnt_r++;
//         else Cnt_l++;
//     }
//
//     if (Cnt_l == Cnt_r) cout << "YES";
//     else cout << "NO";
//
// }



// void solve() {
//
//     string s ; cin >> s;
//
//     stack <char> st;
//
//
//     for (int i = 0 ; i < s.length(); i++) {
//
//         if (s[i] == '(') {
//             st.push('(');
//         }
//         else {
//             if (!st.empty()) {
//                 st.pop();
//             }
//             else {
//                 cout << "NO"; return;
//             }
//         }
//
//     }
//
//     if (st.empty()) {
//         cout << "YES";
//     }
//     else cout << "NO";
//
// }


void solve() {
    string s; cin >> s;
    int balance = 0;

    for (int i = 0 ; i < s.length(); i++) {
        if (s[i] == '(') {

            balance++;

        } else {
            balance--;



            if (balance < 0) {
                cout << "NO\n";
                return;
            }
        }
    }

    if (balance == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}