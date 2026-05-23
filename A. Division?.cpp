//
// Created by eba on 5/15/26.
//
#include <iostream>
#include <cmath>
using namespace std;

int ReadNumber() {
    int Number = 0;cin>>Number;return Number;
}

void Division(int rating) {

    if (rating >= 1900  )
        cout << "Division 1";
    else if (rating >= 1600 &&  rating <= 1899)
        cout << "Division 2";
    else if (rating >=1400 && rating <= 1599)
        cout << "Division 3";
    else
        cout << "Division 4";
}
void ReadArray(int &length,int Number[]) {


    for (int i = 0; i <length;i++) {
        Number[i] = ReadNumber();
    }
}


int main() {
    int rating[10005],length;

      length = ReadNumber();
    ReadArray(length,rating);

    for (int i = 0 ; i < length;i++) {
        Division(rating[i]);
        cout << endl;

    }
      return 0;

}