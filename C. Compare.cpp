//
// Created by eba on 4/19/26.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string X,Y;
    cin >> X >> Y;

    int min_len = min(X.length(),Y.length());

    for (int i = 0; i < min_len; i++) {
        if (X[i] < Y[i]) {
            cout <<X ; return 0;
        }
        else if (Y[i] < X[i]) {
            cout << Y << endl;
            return 0;
        }
    }
    if (X.size() < Y.size()) cout << X << endl;
    else cout << Y << endl;

    return 0;

}