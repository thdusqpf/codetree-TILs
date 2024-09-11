#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string s, tmp = "";
    cin >> s;
    char c = s[0];
    int cnt = 1, len = 0;
    tmp += c;
    for (int i = 1; i < s.length(); i++) {
        if (c == s[i]) cnt++;
        else {  
            tmp += to_string(cnt);
            cnt = 1;
            c = s[i];
            tmp += c;
        }
    }
    tmp += to_string(cnt);
    cout << tmp.length() << '\n';
    cout << tmp;
    return 0;
}