#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.length();
    int sum = 0;
    for (int i = 0; i < len; i++) {
        if (isdigit(s[i])) sum += (int)s[i] - '0';
    }
    cout << sum;
    return 0;
}