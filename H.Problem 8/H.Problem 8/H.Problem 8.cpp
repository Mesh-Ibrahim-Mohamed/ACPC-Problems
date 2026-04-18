#include <iostream>



using namespace std;

int max(int a , int b) {
    if (a > b) return a ;
    else if (b > a ) return b;
}



int getMax(int a[], int n) {
    int res = a[0];
    for (int i = 1; i < n; i++) 
        
        res = max(res, a[i]);

    return res;
}

int getMin(int a[], int n) {
    int res = a[0];
    for (int i = 1; i < n; i++)
        res = min(res, a[i]);

    return res;
}

bool isPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isPalin(int n) {
    string s = to_string(n);
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}

int countDiv(int n) {
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) res++;
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    int a[105];
    for (int i = 0; i < n; i++) cin >> a[i];

    int pCount = 0, palCount = 0;
    int maxD = 0, resNum = 0;

    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) pCount++;
        if (isPalin(a[i])) palCount++;

        int d = countDiv(a[i]);
        if (d > maxD) {
            maxD = d;
            resNum = a[i];
        }
        else if (d == maxD) {
            resNum = max(resNum, a[i]);
        }
    }


    cout << "The maximum number : " << 
        getMax(a, n) << endl;

    cout << "The minimum number : " <<
        getMin(a, n) << endl;

    cout << "The number of prime numbers : " <<
        pCount << endl;

    cout << "The number of palindrome numbers : " <<
        palCount << endl;

    cout << "The number that has the maximum number of divisors : " << 
        resNum << endl;

  
}