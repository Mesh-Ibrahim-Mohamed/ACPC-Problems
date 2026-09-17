//
// Created by eba on 7/6/26.
//

#include <iostream>
#include <string>

using namespace std;

void Solve() {

    string AorB;
    cin >> AorB;

    int Count_A = 0;

    for (int i = 0; i < 5; i++) {
        if (AorB[i] == 'A') {
            Count_A++;
        }
    }
    if (Count_A >= 3 ) {
        cout << "A\n";

    }
    else
        cout << "B\n";

}

int main() {
    int T;cin >> T;

    while (T--) {
        Solve();
    }

}