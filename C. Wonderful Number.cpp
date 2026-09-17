//
// Created by eba on 9/14/26.
//
#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define str string
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

//int freq[256] = {};
//ll pre[1000005] ;
//ll a[500005];
//ll last_val[200005];



bool Rev_num(int n) {
    string bin= "";


    while (n > 0) {
        bin += to_string(n % 2);
        n /= 2;
    }


    int l = 0;
    int r= bin.length() - 1;
    while (l < r) {
        if (bin[l] != bin[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}


bool iswondrful(ll n) {

    if (n % 2 == 0) {
        return false;
    }
    return Rev_num(n);
}



void solve() {


   ll n ; cin >> n;

    if (iswondrful(n)) cout << "YES";
    else cout << "NO";


}

int main() {
    fastIO();
    solve();
    return 0;
}