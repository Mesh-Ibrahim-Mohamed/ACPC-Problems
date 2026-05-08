//
// Created by eba on 4/19/26.
//
#include <iostream>
#include <iomanip>
using namespace std;

void Avg(float &N,float Number[]) {
   long double Sum = 0;
    cin >> N;
    for (int i = 0 ; i < N;i++) {
        cin >> Number[i];
    }
    for (int i = 0 ; i < N; i++) {
        Sum += Number[i];
    }
cout << fixed << setprecision(6) << Sum / N;}
int main() {
    float N ,Number[10003];

     Avg(N,Number);

}