//
// Created by eba on 4/18/26.
//
#include <iostream>
#include <climits>

using namespace std;
int main() {

    int t ;cin >> t;

    while (t--) {
        int n; cin >> n; int arr[n];
        int Min = INT_MAX;


        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }


        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int current_result = arr[i] + arr[j] + j   - i ;

                if (current_result < Min) {
                    Min = current_result;
                }
            }


        }
        cout << Min << endl;
    }




}