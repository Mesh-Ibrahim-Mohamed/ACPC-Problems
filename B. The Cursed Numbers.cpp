//
// Created by eba on 7/11/26.
//

#include <iostream>

using namespace std;

bool func_has_repeated_digit (string Num) {

    bool has_repeated_digit = false;
    for (int i = 0; i < Num.size(); i++) {

        for (int j = i+1; j < Num.size();j++) {

            if (Num[i] == Num[j])
            {

                has_repeated_digit = true;

            }
            if (has_repeated_digit) {
                break;
            }
        }
    }
    return has_repeated_digit;
}

int main() {

   int n; cin >> n;
    long long Sum = 0;
    string Num;

    while (n--) {

        cin >> Num;
        if (func_has_repeated_digit (Num)) {
            Sum+=stoll(Num);

        }


        }




    cout << Sum ;

    }


