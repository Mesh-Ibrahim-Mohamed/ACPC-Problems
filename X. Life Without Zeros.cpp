//
// Created by eba on 8/27/26.
//

#include <bits/stdc++.h>

#define ll long long
#define Bye return 0;

using namespace std;

ll Remove_Zeros(ll Num) {

    string s = to_string(Num);

    string New_s = "";

    for (int i = 0; i < s.length();i++) {
        if (s[i] != '0') {
            New_s += s[i];
        }
    }


    return stoll(New_s);

}



void Solve() {

    ll a,b;

    cin >> a >> b;

    ll c = a + b;

    ll New_a = Remove_Zeros(a);
    ll New_b = Remove_Zeros(b);
    ll New_c = Remove_Zeros(c);

    if (New_a + New_b == New_c) {
        cout << "YES\n";
    }
    else cout << "NO\n";

}

int main() {

    Solve();

    Bye
}