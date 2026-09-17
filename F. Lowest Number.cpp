//
// Created by eba on 8/25/26.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N; cin >> N ;

    int A[N];

    int Lowest = 1e9 ;
    int Index = 0;

    for (int i = 0 ; i < N; i++) {
        cin >> A[i];

       if ( Lowest  > A[i]) {
           Lowest = A[i];
           Index = i;
       }
    }

    cout << Lowest <<" " <<Index + 1;


}