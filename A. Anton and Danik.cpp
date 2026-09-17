//
// Created by eba on 6/20/26.
//

#include <iostream>
using namespace std;

int main() {
    int T; cin >> T;
    char A[T];
    int Anton = 0,Danik = 0;

    for (int i = 0 ; i < T;i++) {
        cin >> A[i];
    }

    for (int i = 0; i < T;   i++) {
        if (A[i] == 'D') Danik++;
        else if (A[i] == 'A') Anton++;
     }
    // cout <<"Anton : "<< Anton ;
    // cout <<"\n\nDanik : "<< Danik << endl ;


    if (Anton > Danik) cout << "Anton";
    else if (Anton < Danik) cout << "Danik";
    else cout << "Friendship";
}
