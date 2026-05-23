//
// Created by eba on 5/18/26.
//
#include <iostream>
using namespace std;


int main() {
    int coastperstudent;

    int t = 0;long long  a = 0,b = 0, n = 0,c = 0;
    cin >> t;
    while (t--) {
        c = 0;
        cin >> n >> a >> b;

        if (b < a * 3 ) {
            c+=(n / 3) * b;
            n = n % 3;

            if (n * a <= b) {
                c+= n * a;
            }
            else {
                c+=b;
            }

        }
        else {
            c+= n * a;
        }
        cout << c << endl;
    }
    return 0;
}