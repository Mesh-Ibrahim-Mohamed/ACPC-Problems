    //
    // Created by eba on 9/9/26.
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

    void solve() {

     ll n ; cin >> n;


        ll Cnt = 0;
        ll Sum = 0;

        for (ll i = 1 ; i <= n; i ++) {

            if (Sum + i <= n) {
                Sum+= i;
                Cnt++;
            }

            else {break;}


        }



     cout << Cnt;

    }

void solveBS() {
        ll n; cin >> n;

        ll low = 1, high = 2e9;

        ll ans = 0;

        while (low <= high) {
            ll mid = low + (high - low) / 2;


            ll sum = mid * (mid + 1) / 2;

            if (sum <= n) {

                ans = mid;

                low = mid + 1;


            } else {

                high = mid - 1;

            }

        }
        cout << ans << "\n";
    }


void solveMath() {
        ll n; cin >> n;

 ll k =((sqrt(1 + 8 * n) - 1 ) / 2 );
        cout << k << "\n";
    }



    int main() {
        fastIO();
        solveMath();
        return 0;
    }