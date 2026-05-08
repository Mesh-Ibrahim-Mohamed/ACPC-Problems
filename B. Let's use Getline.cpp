    //
    // Created by eba on 4/19/26.
    //
    #include <iostream>
    #include <string>

    using namespace std;

    int main() {

        string s;
        getline(cin,s);

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '\\')
                cout << s[i];
            else return 0;  
        }

    }