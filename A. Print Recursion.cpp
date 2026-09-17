//
// Created by eba on 5/25/26.
//
#include <iostream>
using namespace std;

void Printl(int n) {
    if (n==0)return;
    cout<< "I love Recursion"<< endl;
    Printl(n-1);
}

int main() {
    int n ;cin >> n;
    Printl(n);
}