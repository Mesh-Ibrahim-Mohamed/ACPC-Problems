
#include <iostream>
#include <string>

using namespace std;

void Swap(char &a , char &b) {
    char Temp;

    Temp = a;
    a = b;
    b = Temp;
}

int main(){

    string  a,b; cin >> a >> b;

    int N_1 = a.length(),N_2 = b.length();

    cout << N_1 << " " << N_2<< endl;
    cout << a << b << endl;

    Swap(a[0],b[0]);
    cout << a << " " << b;


}