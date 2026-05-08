//
// Created by eba on 4/19/26.
//
#include <iostream>
#include <string>

using namespace std;

string Reveras(string Num) {

    string Rev_Num = "";
    for (int i = Num.length(); i >  0; i-- ) {
        Rev_Num[i] += Num[Num.length() - i];

    }
    return  Rev_Num;
}

int main() {
    string Num;
    cin >> Num;
    cout << Reveras(Num);
}


