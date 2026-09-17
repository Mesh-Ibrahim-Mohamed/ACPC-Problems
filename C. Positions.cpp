//
// Created by eba on 8/25/26.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int n ; cin >> n; int A[200005] ;

    for (int i = 0 ; i < n; i++) {
        cin >> A[i];
    }

    for (int i = 0 ; i < n; i++) {
        if (A[i] <= 10) {
            cout << "A[" << i << "]" << " = " << A[i] << "\n";
        }
    }
}