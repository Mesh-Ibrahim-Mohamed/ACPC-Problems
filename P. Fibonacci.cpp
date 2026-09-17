//
// Created by eba on 8/22/26.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    long long  arr[80];
    int X ; cin >>X;

    arr[1] = 0;
    arr[2] = 1;

    for (int i = 3 ; i <= X; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    cout << arr[X];
}