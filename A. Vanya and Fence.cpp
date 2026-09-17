    //
    // Created by eba on 6/19/26.
    //
    #include <iostream>

    using namespace std;

    void solve() {

        int N,Hight;

        cin >> N >> Hight;

        int Frinds_Hights[N];

        int i = 0;
        for ( i = 0; i < N; i++) {
            cin >> Frinds_Hights[i];
        }
        i = 0;
        int Width = 0;
        while (N--) {

            if (Hight >= Frinds_Hights[i] ) {
                Width++;
            }
            else Width+=2;
            i++;

        }

        cout << Width;
    }

        int main() {

            solve();
        }
