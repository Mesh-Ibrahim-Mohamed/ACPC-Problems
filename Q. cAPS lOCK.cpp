//
// Created by eba on 7/5/26.
//

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

void Solve() {
    string s;
    cin>>s;

    // CAPS
    // cAPS

    bool flag = true;

    for (int i = 1 ; i < s.size(); i++) {

        if (islower(s[i])) flag = false;

    }

    if (flag) {
        for (int i = 0 ; i < s.size(); i++) {
            if (isupper(s[i])) cout << char(tolower(s[i]));
            else cout << char(toupper(s[i]));
        }

    }
    else cout << s;

}


int main() {

    Solve();

}