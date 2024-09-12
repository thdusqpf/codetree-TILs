#include <iostream>
using namespace std;

int main() {
    string s, c;
    cin >> s >> c;

    int len = s.length();

    for (int i = 0; i < c.length(); i++) {
        if (c[i] == 'L') 
            s = s.substr(1, len - 1) + s.substr(0, 1);
        else if (c[i] == 'R')
            s = s.substr(len - 1, 1) + s.substr(0, len - 1);
    }

    cout << s;
    return 0;
}