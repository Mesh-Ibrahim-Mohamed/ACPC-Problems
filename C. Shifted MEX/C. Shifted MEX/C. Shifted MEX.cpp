#include <iostream>
#include <vector>

using namespace std;

void solve() {
    long long n, m, h;
    cin >> n >> m >> h;

    vector<long long> original(n + 1);
    vector<long long> current(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> original[i];
        current[i] = original[i];
    }

    for (int i = 0; i < m; i++) {
        int b;
        long long c;
        cin >> b >> c;

        current[b] += c;

        if (current[b] > h) {
            // حصل Crash! ارجع للأصل
            for (int j = 1; j <= n; j++) {
                current[j] = original[j];
            }
            // ملاحظة: الـ loop دي ممكن تخلي الكود بطيء لو حصل crashes كتير
            // فكر: هل فيه طريقة نعرف بيها آخر Crash من غير ما نلف كل شوية؟
        }
    }

    for (int i = 1; i <= n; i++) cout << current[i] << (i == n ? "" : " ");
    cout << endl;
}