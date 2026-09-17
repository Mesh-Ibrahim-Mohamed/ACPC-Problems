//
// Created by eba on 7/7/26.
//
#include <iostream>
#include <string>

using namespace std;




int main() {

    int N;cin >> N;

    string A;


    int freq[26] = {};
    char c;


    for (int i = 0; i < N; ++i) {
        cin >> c;

        freq[c - 'a']++;
    }

    for (int i = 0; i < 26; ++i) {
        while (freq[i] > 0) {
            cout << (char)(i + 'a');
            freq[i]--;
        }
    }

}