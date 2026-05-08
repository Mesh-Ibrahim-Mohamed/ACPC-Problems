#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string text = "";
    char c;

    while (cin.get(c)) {
        text += c;
    }

    string cleaned = "";
    bool in_block = false;
    bool in_line = false;

    for (int i = 0; i < text.length(); i++) {
        if (in_block) {
            if (i + 1 < text.length() && text[i] == '*' && text[i + 1] == '/') {
                in_block = false;
                i++;
            }
        } else if (in_line) {
            if (text[i] == '\n') {
                in_line = false;
                cleaned += '\n';
            }
        } else {
            if (i + 1 < text.length() && text[i] == '/' && text[i + 1] == '/') {
                in_line = true;
                i++;
            } else if (i + 1 < text.length() && text[i] == '/' && text[i + 1] == '*') {
                in_block = true;
                i++;
            } else {
                cleaned += text[i];
            }
        }
    }

    string current = "";
    for (int i = 0; i < cleaned.length(); i++) {
        if (cleaned[i] == '\n') {
            bool is_empty = true;
            for (int j = 0; j < current.length(); j++) {
                if (current[j] != ' ' && current[j] != '\t' && current[j] != '\r') {
                    is_empty = false;
                    break;
                }
            }
            if (!is_empty) {
                cout << current << "\n";
            }
            current = "";
        } else {
            current += cleaned[i];
        }
    }

    if (current.length() > 0) {
        bool is_empty = true;
        for (int j = 0; j < current.length(); j++) {
            if (current[j] != ' ' && current[j] != '\t' && current[j] != '\r') {
                is_empty = false;
                break;
            }
        }
        if (!is_empty) {
            cout << current << "\n";
        }
    }

    return 0;
}