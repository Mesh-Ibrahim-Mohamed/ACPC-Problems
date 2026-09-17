//
// Created by eba on 9/11/26.
//

#include <bits/stdc++.h>
using namespace std;
#define str string
#define ll long long

void fastIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

//int freq[256] = {};
//int pre[10000005] ;
ll a[500005];
//ll last_val[200005];
void solve() {
    int n;
    cin >> n;


    priority_queue<ll, vector<ll>, greater<ll>> pq;
        ll sum = 0;

    for (int i = 0; i < n; i++) {
        ll a;
        cin >> a;
        pq.push(a);
        sum += a;
        while (!pq.empty() && pq.top() <= pq.size()) {
            sum -= pq.top();
            pq.pop();
        }
    }

    ll k = pq.size();

    ll cost = k * (k + 1) / 2;

    cout << max(0LL, sum - cost) ;

}

int main() {
    fastIO();
    solve();
    return 0;
}