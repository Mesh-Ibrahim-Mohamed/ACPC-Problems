//
// Created by eba on 8/24/26.
//

#include <iostream>
#include <cmath>

using namespace std;

void Solve() {
    long long x ; cin >> x; short d ; cin >> d;

    short endx = x % 10;

    int Result = (d - endx + 10) % 10;




    cout << Result << endl;
}

void AnthoerSolve() {
    long long x; cin >> x; short d; cin >> d;

    short endx = x % 10;

    int Results;
    if (endx <= d) Results = d - endx;
    else Results = (d - endx) + 10;

    cout << Results;

}

int main() {
int t; cin >> t;
    while (t--) {
        AnthoerSolve();
    }


}