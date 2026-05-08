#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    string username_s = "", pwd_s = "", profile_s = "", role_s = "", key_s = "";
    int state = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '=') {
            i++;
            while ( i < s.length() && s[i] != '&') {
                if (state == 0) { username_s += s[i];
                }
                else if (state == 1) { pwd_s += s[i];}
                else if (state == 2) { profile_s += s[i];}
                else if (state == 3) { role_s += s[i];}
                else if (state == 4) { key_s += s[i];}
                    i++;
            }
            state++;
        }
    }
    cout << "username: " << username_s << endl;
    cout << "pwd: " << pwd_s << endl;
    cout << "profile: " << profile_s << endl;
    cout << "role: " << role_s << endl;
    cout << "key: " << key_s << endl;

    return 0;
}