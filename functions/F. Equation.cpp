//
// Created by eba on 4/19/26.
//
#include <iostream>

using namespace std;


long long power(int x,int n) {
    long long Power = 1 ;
    for (int i = 0; i < n; i++) {
        Power *= x;
    }
    return Power;
}

void Equation(int X, int N) {
    long long res = 0;
    for (int i = 2; i <=N; i+=2) {
        res += power(X,i);
    }
    cout << res;
}
int main() {
    int x,n;cin >> x >> n;

    Equation(x,n);

}
