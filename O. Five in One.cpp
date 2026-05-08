#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

void ReadArray(int &N, int arr[]) {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
}

int Max(int a, int b) {
    if (a > b) return a; else return b;
}
int Min(int a, int b) {
    if (a < b) return a; else return b;
}

bool IsPrime(int Number) {
    if (Number < 2) return false;
    for (int i = 2; i <= sqrt(Number); i++) {
        if (Number % i == 0) return false;
    }
    return true;
}

int CountPrime(int N, int arr[]) {
    int Counter = 0;
    for (int i = 0; i < N; i++) {
        if (IsPrime(arr[i])) {
            Counter++;
        }
    }
    return Counter;
}

int Reveras(int Number) {
    int Rev_Number = 0, Reminder;
    while (Number > 0) {
        Reminder = Number % 10;
        Rev_Number = (Rev_Number * 10) + Reminder;
        Number /= 10;
    }
    return Rev_Number;
}

bool IsPlindrome(int Number) {
    if (Number == Reveras(Number)) return true;
    else return false;
}


int CountPalindrome(int N, int arr[]) {
    int Counter = 0;
    for (int i = 0; i < N; i++) {
        if (IsPlindrome(arr[i])) {
            Counter++;
        }
    }
    return Counter;
}

int countDivisors(int Number) {
    int Counter = 0;
    for (int i = 1; i <= Number; i++) {
        if (Number % i == 0) Counter++;
    }
    return Counter;
}

int MaxDivisorsInArray(int N, int arr[]) {
    int res = arr[0];
    int max_div = 0;
    for (int i = 0; i < N; i++) {
        int d = countDivisors(arr[i]);

        if (d > max_div) {
            max_div = d;
            res = arr[i];
        } else if (d == max_div) {
            res = Max(res, arr[i]);
        }
    }
    return res;
}

int main() {
    int N, Num[10003];
    ReadArray(N, Num);

    int maxx = Num[0], minn = Num[0];
    for(int i = 1; i < N; i++) {
        maxx = Max(maxx, Num[i]);
        minn = Min(minn, Num[i]);
    }

    cout << "The maximum number : " << maxx << endl;
    cout << "The minimum number : " << minn << endl;
    cout << "The number of prime numbers : " << CountPrime(N, Num) << endl;
    cout << "The number of palindrome numbers : " << CountPalindrome(N, Num) << endl;
    cout << "The number that has the maximum number of divisors : " << MaxDivisorsInArray(N, Num) << endl;

    return 0;
}