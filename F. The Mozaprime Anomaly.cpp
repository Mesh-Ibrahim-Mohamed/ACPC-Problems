//
// Created by eba on 8/19/26.
//
#include <iostream>
#include <cmath>

using namespace std;

bool IsPrime(int N) {
    if (N < 2) {
        return false;
    }

        for (int i = 2 ; i <= sqrt(N); i++ ) {
            if (N % i == 0) return  false;
    }
    return true;
}

long long SumDigit(int N) {

    long long Sum = 0;

    while (N > 0) {

        Sum += N % 10 ;
        N/=10;
    }

   return  Sum ;

}
long long MultiDigit(int N) {

    long Multi = 0;

    while (N > 0) {

        int Digit = N % 10;

        Digit = pow(Digit,2);

        Multi +=  Digit ;

        N/=10;
    }

    return Multi;
}

void Solve() {
    int Cnt = 0;
    long long L ,R;cin >> L >> R;
for (long long i = L ;i <= R; i++ ){


    if (IsPrime(SumDigit(i))&&IsPrime(MultiDigit(i))) Cnt++;
}

    cout << Cnt << endl;
}


int main() {
    int t ; cin >> t;
    while (t--) {
        Solve();
    }
}