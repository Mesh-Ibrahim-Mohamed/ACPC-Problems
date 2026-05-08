//
// Created by eba on 4/19/26.
//

#include <iostream>

using namespace std;

void TimesCh(int N ,char C,int T) {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> T ; cin >> C;
        for (int j = 0 ; j < T; j++) {
            cout << C << " ";
        }
        cout << endl;
    }
}
int main() {
    int N,T;char c;
    TimesCh(N, c ,T);
}
