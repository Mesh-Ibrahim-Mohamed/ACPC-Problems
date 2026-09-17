//
// Created by eba on 6/20/26.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    string S_1,S_2;
    cin >> S_1 >> S_2;

    for (char &c : S_1) {
        c = tolower(c);
    }
    for (char &C : S_2) {
        C = tolower(C);
    }

    if (S_1 < S_2) {
        cout << -1;
    } else if (S_1 > S_2) {
        cout << 1;
    } else {
        cout << 0;
    }



}

