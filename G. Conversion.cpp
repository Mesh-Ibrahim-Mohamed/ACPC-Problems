//
// Created by eba on 4/20/26.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
//32 الفرق مابين ال a , A
//A = 65 , a = 97


    string s; getline(cin,s);

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 65 && s[i] <= 90) {
            cout <<(char) (s[i] + 32);
        }
        else if (s[i] >= 97 && s[i] <= 122) {
            cout <<(char)(s[i] - 32);
        }
        else
            cout << " ";
    }

}
