//
// Created by eba on 4/18/26.
//

#include <iostream>
#include <algorithm>

using namespace std;





int main() {
    int n,m;
    cin >> n>> m;int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
int x ,Counter = 0;
    for (int i = 0 ; i < n  ; i++) {


        if (Counter == 0) {
                x = arr[i];
        }
        else {
            x = min(x,arr[i]);
        }
        Counter++;

        if (Counter == m || i == n - 1) {
            cout << x << " ";
            Counter = 0;
        }

    }

}