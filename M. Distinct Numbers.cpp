//
// Created by eba on 4/19/26.
//
#include <iostream>
#include <algorithm>

using namespace std;

void Readarr(int &N,int Arr[]) {
        cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> Arr[i];
    }
}
int CountDe(int N,int Arr[]) {
    int Counter = 1;
    sort(Arr,Arr+N);

    for (int i = 0; i < N - 1 ; i++) {

            if (Arr[i] != Arr[i+1]) {
                Counter++;
            }

    }
    return Counter;
}
int main() {

    int N, Arr[10003];
    Readarr(N,Arr);
    cout << CountDe(N,Arr);


}

