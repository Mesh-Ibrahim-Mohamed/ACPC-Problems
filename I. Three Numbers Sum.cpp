//
// Created by eba on 7/5/26.
//
#include <iostream>

using namespace std;

int main() {

    int S,K;
    cin >> K >> S;


    int  Cnt = 0 ;
    int Z ;
    for (int X = 0; X <= K; X++) {
        for (int Y = 0; Y <= K; Y++) {

            Z = S - X - Y;

            if (Z >= 0 && Z <= K ) {
                Cnt++;
            }
        }
    }

    cout << Cnt;
}
