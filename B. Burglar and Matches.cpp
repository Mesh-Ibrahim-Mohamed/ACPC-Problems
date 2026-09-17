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


bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second > b.second;
}

void solve() {

    ll n,m; cin >> n >> m;

    vector<pair<int, int>> V(m);



    for (int i = 0 ; i < m; i ++){
    cin >> V[i].first >> V[i].second;
    }

    sort(V.begin(),V.end(),cmp);

    ll sum = 0;

    for (int i = 0 ; i < m; i++) {

        if (n ==0) break;

        ll take = min ((ll)V[i].first,n);

        sum += take * V[i].second;

        n -= take;
    }


    cout << sum ;

}

int main() {
    fastIO();
    solve();
    return 0;
}