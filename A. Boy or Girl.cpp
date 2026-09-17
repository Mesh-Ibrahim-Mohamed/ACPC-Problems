//
// Created by eba on 6/21/26.
//
// محتاجين نحسب الحروف المميزه
// لو كان عددهم فردي يبقي دا ولد غير كدا بنت
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string A;
    int Counter = 1;
    cin >> A;
    sort(A.begin(), A.end());

    for (int i = 1; i < A.length() ; i++) {
        if (A[i] != A[i - 1]) {
            Counter++;

        }
    }

    if (Counter % 2 != 0  ) cout << "IGNORE HIM!";
    else cout << "CHAT WITH HER!";


}