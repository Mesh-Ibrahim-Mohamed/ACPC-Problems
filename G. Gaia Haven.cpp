//
// Created by eba on 8/16/26.
//

#include <iostream>
#include <algorithm>

using namespace std;

void Solve() {
        int b, d, c, k, t; cin >> b >> d >> c >> k >> t;


        for (int i = 1 ; i <= t; i++) {

                b -= d;

                if (b <= 0) { b = 0;
                        break;
                }

                if (i % k == 0) {
                        b += c;
                }


                if (b > 100) b = 100;
                if (b <= 0) { b = 0;
                        break;
                }
        }

        cout << b;
}

int main() {

        Solve();
}