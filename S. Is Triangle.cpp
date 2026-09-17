//
// Created by eba on 9/13/26.
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

void solve() {

    int a,b,c; cin >>  a >> b >> c;



    if (a + b > c && a + c > b && b + c > a) {
        cout << "Valid\n";



        double s = (a + b + c) / 2.0;


        double area = sqrt(s * (s - a) * (s - b) * (s - c));


        cout << fixed << setprecision(6) << area;
    } else {

        cout << "Invalid";
    }

}

int main() {
    fastIO();
    solve();
    return 0;
}