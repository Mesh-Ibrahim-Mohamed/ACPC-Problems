//
// Created by eba on 4/19/26.
//
#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;cin >> n;
    string S;

    bool IsGood ;

    for (int i = 0; i < n; i++) {
        cin >> S;
         IsGood = false;

        for (int j = 0; j <=(int)S.length() - 3 ;j++) {
            if ((S[j] == '1' && S[j + 1] == '0' && S[j + 2] =='1') || S[j] == '0' && S[j+1] == '1' && S[j + 2 ] == '0' ) {
                IsGood = true;break;
            }

        }
        if (IsGood) {
            cout << "Good\n";
        }
        else cout << "Bad\n";
    }
}