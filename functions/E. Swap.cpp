//
// Created by eba on 4/19/26.
//

#include <iostream>

using namespace std;

void Swap(int &a, int  &b) {
    int Temp;

    Temp = a;
    a = b;
    b = Temp;

}
int main() {
    int a,b;cin >> a >> b;


    Swap(a,b);
    cout << a << " " << b;
}