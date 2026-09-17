// Created by eba on 9/14/26.
//
#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

}



ll add(ll a , ll b, ll m) {
    return ((a % m) + (b % m) ) % m;
}

ll sub(ll a , ll b, ll m) {
    return ((a % m) - (b % m) + m ) % m;
}

ll multi (ll a , ll b , ll m) {
    return ((a % m) * (b % m) ) % m;
}

void solve() {
    int n;
    cin>>n;
    int m;
    cin>>m;
    // Cycling 
    for(int i=0;i<n;i++)
    {
        cout<<i<<"------->"<<i%m<<endl;
    }
}

int main() {
    fastIO();
    solve();
    return 0;
}