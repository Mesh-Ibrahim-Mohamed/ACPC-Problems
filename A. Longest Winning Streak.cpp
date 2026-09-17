//
// Created by eba on 8/24/26.
//

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;cin >> N;
    int Cnt = 0;
    string S;cin >> S;
    int Max  = 0;
    for (int i = 0 ; i < N; i++) {

    if (S[i] == 'W') Cnt++;

    else if (S[i] == 'L')
    {

        Cnt = 0;
    }
        Max = max(Cnt,Max);

    }

    cout << Max;

}