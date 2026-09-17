//
// Created by eba on 8/16/26.
//
#include <iostream>
#include <algorithm>

using namespace std;

void Solve() {
    int arr[1000],N;cin >> N;

    for (int i = 0 ; i < N; i++) {
        cin >> arr[i];
    }
    int Sereja = 0, Dima = 0;

    int Right = N - 1, Left = 0;

    for (int i =0 ; i < N; i++) {

        if (arr[Left] > arr[Right]) {
            if (i % 2 == 0) {
                Sereja += arr[Left];
            }
            else {
                Dima += arr[Left];
            }
            Left++;
        }
        else   {
            if (i % 2 == 0) {
                Sereja += arr[Right];
            }
            else {
                Dima += arr[Right];
            }
            Right--;
        }

    }


    cout << Sereja<< " " << Dima;
}

int main() {

    Solve();
}