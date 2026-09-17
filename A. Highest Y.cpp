    //
    // Created by eba on 9/12/26.
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
    //ll pre[1000005] ;
    //ll a[500005];
    //ll last_val[200005];


    // void solve() {
    //
    // int n;cin >> n;
    //
    //     pair<int , int > point[n] ;
    //
    //     for (int i = 0 ; i < n; i++) {
    //         cin >> point[i].second >> point[i].first;
    //
    //     }
    //     sort(point,point + n);
    //
    //     for (int i = n-1 ; i >= 0;i--) {
    //
    //         cout << point[i].second <<" "<<point[i].first << "\n";
    //      }
    //
    // }

    void solve() {

        int n ; cin >> n;

        vector<pair<int , int >> v(n);

        for (int i = 0 ; i < n; i ++) {
            cin >> v[i].second >> v[i].first;
        }

        sort(v.rbegin(),v.rend());


        for (int i = 0 ; i < n; i++) {
            cout << v[i].second << " " << v[i].first << "\n";
        }



    }

    int main() {
        fastIO();
        solve();
        return 0;
    }