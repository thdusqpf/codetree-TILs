#include <iostream>
using namespace std;

bool Check(string& s) {
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] != s[i + 1]) return true;
    }
    return false;
}

int main() {
    string s;
    cin >> s;

    if (Check(s)) cout << "Yes";
    else cout << "No";
    return 0;
}