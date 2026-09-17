//
// Created by eba on 7/6/26.
//

#include <iostream>
#include <string>

using namespace std;

void solve() {
    int n;
    cin >> n;

    int first_row_ones = -1;
    int second_row_ones = -1;

    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;

        int count = 0;
        for (int j = 0; j < n; j++) {
            if (row[j] == '1') {
                count++;
            }
        }

        if (count > 0) {
            if (first_row_ones == -1) {
                first_row_ones = count;
            } else if (second_row_ones == -1) {

                second_row_ones = count;
            }
        }
    }

    if (first_row_ones == second_row_ones) {
        cout << "SQUARE\n";
    } else {
        cout << "TRIANGLE\n";
    }
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
