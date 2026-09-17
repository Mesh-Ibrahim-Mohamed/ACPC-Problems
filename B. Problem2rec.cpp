//
// Created by eba on 5/25/26.
//
#include <iostream>
using namespace std;

void printeven(int n[],int &arrlen) {

    if (arrlen == 0) {
        cout << n[0];return;
    }

    if (arrlen % 2 == 0) {
        cout << n[arrlen]<<endl;printeven(n[arrlen - 2],arrlen);
    }
    else if (arrlen % 2 != 0) {
        cout << n[arrlen- 1]<<endl;printeven(n[arrlen - 2],arrlen);
    }
    
}

int main() {
    int n[10005],arrlen;
    cin >> arrlen;
    for (int i = 0 ; i < arrlen;i++) {
        cin >> n[i];
    }
    printeven(n,arrlen);
}