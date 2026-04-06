#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    char a[105][105];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int x, y;
    cin >> x >> y;

    
    x--;
    y--;

    bool isValid = true;

  
    for (int i = -1; i <= 1; i++) {
        for (int j = -1; j <= 1; j++) {
            
            if (i == 0 && j == 0) continue;

            int nx = x + i;
            int ny = y + j;

                        if (nx >= 0 && nx < n && ny >= 0 && ny < m) {
                if (a[nx][ny] != 'x') {
                    isValid = false;
                }
            }
        }
    }

    if (isValid) cout << "yes\n";
    else cout << "no\n";

    return 0;
}