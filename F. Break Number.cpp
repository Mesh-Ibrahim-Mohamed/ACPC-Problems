//
// Created by eba on 5/1/26.
//
#include <iostream>
#include <cmath>

using namespace std;


int main() {
    int T;cin>>T;long long N[T];
    long long Counter = 0,Counter2 = 0;

    for (int i = 0; i < T; i++) {
        cin >> N[i];
    }
    for (int i = 0; i < T;i++) {
        Counter = 0;
        while (N[i] % 2 == 0 ) {
            Counter++; N[i] = N[i] / 2;
        }
        if (Counter > Counter2) Counter2 = Counter;
    }

    cout << Counter2 ;

}