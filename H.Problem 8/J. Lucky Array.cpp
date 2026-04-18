//
// Created by eba on 4/18/26.
//
#include <iostream>
using namespace std;

int main() {
    int n ; cin >> n; int arr[n],   min = 100006;

    for (int i = 0;  i < n; i++) {
        cin >> arr[i];
    }

    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];

        }
    }

    for (int i = 0; i < n; i++) {
        if (min == arr[i]) {
            counter++;
        }
    }

    if (counter  % 2 != 0) cout << "Lucky";
    else cout <<"Unlucky";
}