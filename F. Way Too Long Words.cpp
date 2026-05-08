//
// Created by eba on 4/19/26.
//
#include <iostream>
#include  <string>

using namespace std;

int main() {
    string s;int N;cin >> N;
for (int i = 0; i < N; i++) {
    cin >> s;
    if (s.length() > 10) {
        cout << s[0] << s.length() - 2<< s[s.length() - 1] << endl;
    }
    else cout << s << endl;
}
}