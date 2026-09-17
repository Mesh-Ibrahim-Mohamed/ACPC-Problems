//
// Created by eba on 9/7/26.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define str string

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
//int Freq[27] = {};
void solve() {
    str S;
    getline(cin, S);

    str word = "";

     for (int i = 0 ; i < S.length(); i++) {
         if (S[i] == ' ') {

             reverse(word.begin(),word.end());
             cout << word << " ";
             word = "";
         }
         else {
             word += S[i];
         }
     }

    reverse(word.begin(),word.end());
    cout << word ;
    return;

}

int main() {

    fastIO();
    solve();

    return 0;
}