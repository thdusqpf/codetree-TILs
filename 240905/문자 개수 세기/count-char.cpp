#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string s;
    char c;
    getline(cin, s);
    cin >> c;
    int ans = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == c) ans++;
    }
    cout << ans;
    return 0;
}