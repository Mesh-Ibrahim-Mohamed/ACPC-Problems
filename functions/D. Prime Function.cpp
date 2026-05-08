//
// Created by eba on 4/19/26.
//
#include <iostream>
#include <cmath>
using namespace std;

bool IsPrime(int Number) {
    if ( Number <= 1 ) return false;

    for (int i = 2; i <= sqrt(Number); i++) {
        if (Number % i == 0)
            return false;


    }
    return true;
}



int main() {
    int N;cin >> N;
    int Number;
    for (int i = 0; i < N;i++) {
        cin >> Number;
        if (IsPrime(Number)) cout << "YES\n";
        else cout << "NO\n";
    }

}