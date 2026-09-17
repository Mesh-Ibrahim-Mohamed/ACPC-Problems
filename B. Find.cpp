//
// Created by eba on 8/25/26.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int N; cin >> N;

    int arr[100005];

    int Find;cin >> Find;

    for (int i = 0 ; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = 0 ; i < N; i++) {
        if (Find == arr[i]) {
            cout << i ;     return 0;

        }

    }
    cout << "Not Found";


}