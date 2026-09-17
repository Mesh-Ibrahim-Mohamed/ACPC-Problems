//
// Created by eba on 8/20/26.
//

#include <iostream>

using namespace std;

int main() {

    int n ; cin >> n;

    if (n >= 0 &&  n <= 12) cout << "CHILD";
    else if (n >= 13 &&  n <= 17) cout << "TEENAGER";
    else if (n >= 18 &&  n <= 59) cout << "ADULT";
    else cout << "SENIOR";

}