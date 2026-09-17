//
// Created by eba on 8/22/26.
//
#include <iostream>
#include <string>

using namespace  std;

void Solve() {
    int OP;
    cin >> OP;

    string S,E = "" ; cin >> S;


    if (OP == 1) {
        while (S.length() > 0) {

            int len = S.length();
            int Mid ;

            if (len% 2 == 0) {        // ODD

                Mid = (len / 2 ) - 1 ;

            }
            else{  // EVEN

                Mid = (len / 2);

            }

            E += S[Mid];
            S.erase(Mid, 1);

        }

        cout << E << endl;

        // 6 4 2 9 3 2 1

    }
     // DeCrupt
    if (OP == 2) {

        string original = "";

        int len = S.length();

        for (int i = 0; i < len; i++) {
            if (len % 2 != 0) {

                if (i % 2 != 0) {
                    original = S[i] + original;
                } else {
                    original = original + S[i];

                }
            }
            else {

                if (i % 2 != 0) {

                    original = original + S[i];

                }

                else {

                    original = S[i] + original;

                }
            }
        }
        cout << original << endl;
        }
    }


int main() {
    int t; cin >> t;

    while (t--) {
        Solve();
    }

}