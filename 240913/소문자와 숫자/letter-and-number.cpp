#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.length();

    for (int i = 0; i < len; i++) {
        if (isdigit(s[i])) cout << s[i];
        else if (isalpha(s[i])) cout << (char)tolower(s[i]);
    }
    return 0;
}