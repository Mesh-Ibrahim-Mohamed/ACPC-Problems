#include <iostream>

using namespace std;

string toBinary(int n) {
    string s = "";
    while (n > 0) {
        if (n % 2 == 0) s += '0';
        else s += '1';
        n /= 2;
    }
    return s;
}

bool isPalindrome(string s) {
    int start = 0;
    int end = s.length() - 1;
    while (start < end) {
        if (s[start] != s[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    int n;
    cin >> n;

    if (n % 2 != 0) {
        string binary = toBinary(n);
        if (isPalindrome(binary)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    else {
        cout << "NO" << endl;
    }

}