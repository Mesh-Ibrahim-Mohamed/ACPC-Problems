//
// Created by eba on 4/19/26.
//

#include <iostream>
#include <string>

using namespace std;

int main() {

    string s; getline(cin,s);
    int counter = 1;
    for (int i = 0; i < s.length(); i++) {

        if (isalpha(s[i])) {
            if (i == 0 || !isalpha(s[i - 1])) {
                counter++;
            }
        }


    }
    cout << counter - 1 << endl;
    return 0;

}