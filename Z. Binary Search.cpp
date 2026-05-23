//
// Created by eba on 5/9/26.
//
#include <iostream>
#include <algorithm>
using namespace std;

int ReadNum() {
    int Number = 0;cin >> Number;return Number;
}

void ReadArray(int arr[],int& arrlen) {

    for (int i = 0; i <arrlen;i++) {
        arr[i] = ReadNum();
    }
}

void Binary_Search(int arr[],int item,int& arrlength) {
    int low = 0;
    int high = arrlength - 1 ;
    while (low <= high) {
        int mid = (low + high) / 2;
        int guess = arr[mid];
        if (guess == item) {
            cout << "found";
            return;
        }
        else if (guess > item) {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << "not found";
}

int main() {
    
    int arrlen = ReadNum();
    int T = ReadNum();
    int arr[arrlen];
    
    ReadArray(arr,arrlen);


    sort(arr, arr + arrlen);

    for (int i = 0; i < T; i++) {
        int item = ReadNum();
        Binary_Search(arr, item, arrlen);
        cout << endl;
    }
}
