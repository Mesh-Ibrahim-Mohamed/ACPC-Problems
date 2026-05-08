//
// Created by eba on 4/19/26.
//
#include <iostream>
using namespace std;

int Max(int a ,int b) {
    if ( a > b) return a;else return b;
}
int Min(int a ,int b) {
    if ( a > b) return b;else return a;
}
int main() {
    int n ;cin >> n;int arr[n];


    for (int i =0 ; i < n; i++) {
        cin >> arr[i];
    }

    int maxx = arr[0],minn = arr[0];

    for (int i = 0; i < n; i++) {
        maxx = Max(maxx,arr[i]);
        minn = Min(minn,arr[i]);
    }
    cout << minn << " " << maxx ;

}
