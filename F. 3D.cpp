//
// Created by eba on 7/6/26.
//

#include <iostream>

using namespace std;


int main() {

    int N;
    cin >> N;

    int X[N], Y[N], Z[N];

    for (int i = 0 ; i < N ;i++) {
        cin >> X[i] >> Y[i] >> Z[i];
    }


    for (int i = 0 ; i < N; i++) {
        int cx = 0 , cy = 0, cz = 0;

        for (int j = 0 ; j < N ; j++) {
            if (i == j ) continue;

            if (X[i] == X[j]) cx++;
           if (Y[i] == Y[j]) cy++;
             if (Z[i] == Z[j]) cz++;

        }
        cout << cx << " " << cy << " " << cz << endl;
    }

}