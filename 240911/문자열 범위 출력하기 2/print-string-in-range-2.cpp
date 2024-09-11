#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    if (n <= s.length()) {
        for (int i = s.length() - 1; i >= s.length() - n; i--)
            cout << s[i];
    }
    else {
        for (int i = s.length() - 1; i >= 0; i--)
            cout << s[i];
    }
    return 0;
}