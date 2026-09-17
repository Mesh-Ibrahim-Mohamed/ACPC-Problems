//
// Created by eba on 8/25/26.
//

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n ; cin >> n; int A[200005] ;

    for (int i = 0 ; i < n; i++) {
        cin >> A[i];
    }

    sort(A,A+n);

    for (int i = 0 ; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;
    for (int i = n - 1 ; i >= 0; i--) {
        cout << A[i] << " ";
    }
}