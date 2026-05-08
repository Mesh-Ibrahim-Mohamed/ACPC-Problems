//
// Created by eba on 4/19/26.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;cin >> s;
    string hello = "hello";int counter = 0;

    for (int j = 0; j <(int)s.length();j++ ) {
        if (s[j] == hello[counter]) {
            counter++;
        }
        if (counter == 5) {
            break;
        }
    }
    if (counter == 5) {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;


    return 0;


}
