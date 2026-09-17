//
// Created by eba on 8/27/26.
//

#include <bits/stdc++.h>

#define ll long long
#define Bye return 0;

using namespace std;

void Solve() {
     string s; cin >> s;

    bool Flag = false ;

    int n = s.length();

    int Change = 1;

    for (int i = 0 ; i < n/ 2; i++) {


        if (s[i] != s[n - 1 - i] && Change == 1) {
            Change --;
            Flag = true;
            s[i] = s[n - 1 - i];
        }
        else if (s[i] != s[n - 1 - i] && Change == 0) {
            cout << "NO"; return;
        }

    }

    // abcba =>YES :BCS We Can Change  c
    //abccba => NO :BCS We Can't Change  any char
    //abccaa =>YES:BCS We Can Change a to b || b to a


    if (Flag) cout << "YES";
    else if (!Flag && n % 2 != 0) cout << "YES";
    else cout << "NO";


}

int main() {

    Solve();

    Bye
}