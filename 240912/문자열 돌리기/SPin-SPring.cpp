#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();
    int len = s.length();

    while (n--) {
        cout << s << '\n';
        s = s.substr(len - 1, 1) + s.substr(0, len - 1);
    }
    cout << s << '\n';

    return 0;
}