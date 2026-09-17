//
// Created by eba on 8/27/26.
//

#include <bits/stdc++.h>

using namespace std;

void Solve() {
    long l ,r , n; cin >> l >> r >> n;

    // هحتاج اجيب الارقام ال بتقبل من ال 1 لحد r
    // وبعدين نجيب من 1 لحد l - 1
    // كل دا علشان نجيب الفتره l, r  ونشوف فيها كام رقم بيقبل علي n
    //  بعد مانجيب الارقام ال بتقبل علي  n هنطرحهم من العدد الكلي للارقام في الفتره بين [r,l] عشان نعرف كام رقم مش بيبقل

    long A = (r / n) - ((l - 1 ) / n);

    long Ans = (r - l + 1) - A;

    cout << Ans;



}

int main() {
    Solve();
}