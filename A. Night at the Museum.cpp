//
// Created by eba on 7/6/26.
//

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
    string s;
    cin >> s;

    int total_rotations = 0;
    char current_char = 'a';

    for (int i = 0; i < s.length(); i++) {
        char target_char = s[i];

        int dist = abs(target_char - current_char);

        int min_dist = min(dist, 26 - dist);

        total_rotations += min_dist;

        current_char = target_char;
    }

    cout << total_rotations << "\n";

    return 0;
}