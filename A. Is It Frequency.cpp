//
// Created by eba on 7/8/26.
//

#include <iostream>

using namespace std;

int main() {
    int N,M;cin >> N >> M;

    int Arr[N];

    for (int i = 0 ; i < N; i++) {
        cin >> Arr[i];
    }

    int freq[100000 + 1 ] = {};

    for (int i = 0 ; i < N; i++) {

             freq[Arr[i]] ++ ;

    }

    for (int i = 1 ; i <= M; i++) {

        cout << freq[i] << endl;
    }
}
