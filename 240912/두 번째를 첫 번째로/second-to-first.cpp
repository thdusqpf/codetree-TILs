#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char second = s[1];
    char first = s[0];

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == second) s[i] = first;
    }

    cout << s;

    return 0;
}