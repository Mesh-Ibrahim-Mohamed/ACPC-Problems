
#include <iostream>
using namespace std;

void Swap(int &a , int &b) {
    int temp;

    temp = a;
    a = b;
    b = temp;

}




int main() {
    int  n; cin >> n;int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int j = 1; j < n; j++){
    for (int i = 1; i < n; i++) {
        if (arr[i - 1] > arr[i]) {
            Swap(arr[i - 1],arr[i]);
        }
    }

    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }






}

