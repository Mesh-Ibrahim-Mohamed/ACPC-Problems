//
// Created by eba on 4/19/26.
//
#include<iostream>
using namespace std;
int main() {
    string  Key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string Original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

    int Q;
    string S;
    cin >> Q;
    cin >> S;

    for (int i = 0; i < S.length(); i++) {
        if (Q == 1) {
            int pos = Original.find(S[i]);
            cout << Key[pos];
        }
        else {
            int pos = Key.find(S[i]);
            cout << Original[pos];
        }
    }

    cout << endl ; return 0;



}
