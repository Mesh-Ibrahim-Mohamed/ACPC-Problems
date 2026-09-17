//
// Created by eba on 7/10/26.
//

#include <iostream>

using namespace std;

int main() {

    int L,R,N,cnt = 0;

    cin >> L >> R >> N;

    for (int i = L; i <= R ; i++) {
        if (i % N != 0) cnt++;
    }

    cout << cnt;
}