#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    char first = s[0]; // c
    char second = s[1]; // o
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == first) {
            s[i] = second;
            continue;
        }
        if (s[i] == second) s[i] = first;
    }
    cout << s;

    return 0;
}