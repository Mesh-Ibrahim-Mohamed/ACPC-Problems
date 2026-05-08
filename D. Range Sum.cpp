//
// Created by eba on 4/28/26.
//
#include <iostream>
#include <cmath>

using namespace std;

int ReadPositive() {
     int Number;cin >> Number;return Number;
}

void SumFromAToB(int From,int To , int Time) {


    Time = ReadPositive();
    while (Time--) {
        From = ReadPositive();
        To = ReadPositive();

        long long MinVal = min((long long)From, (long long)To);
        long long MaxVal = max((long long)From, (long long)To);


        long long SumToMax = (MaxVal * (MaxVal + 1)) / 2;
        long long SumBeforeMin = ((MinVal - 1) * MinVal) / 2;

        long long FinalSum = SumToMax - SumBeforeMin;

        cout << FinalSum << "\n";
    }

}


int main() {
    int From,To,Times;

     SumFromAToB(From,To,Times);

}
