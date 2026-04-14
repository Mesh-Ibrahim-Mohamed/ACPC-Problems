#include <iostream>

using namespace std;

int counter = 0;


bool isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

void PrintLuckm2n(int n, int m)
{
        int counter = 0;


    if (n > m)
    {
        for (int i = m; n >= i; i++)
        {
            if (isLucky(i))
            {
                cout << i << " "; counter++;
            }
            
            
        }

        if (counter == 0) cout << -1;

    }



    else if (n < m)
    {
        counter = 0;

        for (int i = n; m >= i; i++)
        {
            if (isLucky(i))
            {
                cout << i << " "; counter++;
            }

        }

    }
    if (counter == 0) cout << -1;
    
}

int main()
{
    int n, m;

    cin >> n >> m;

    PrintLuckm2n(n, m);


}


