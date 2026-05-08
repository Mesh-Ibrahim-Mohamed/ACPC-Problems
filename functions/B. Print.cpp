//
// Created by eba on 4/19/26.
//

#include <iostream>
using namespace std;

void PrintFrom12N(int n ) {
    for (int i = 1 ; i <=n; i++) {
    if (i != n)       cout << i << " ";
        else if (i == n) cout << i;
    }
}

int main() {
    int n ;cin >> n ;

    PrintFrom12N(n);
}
