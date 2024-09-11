#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s.find(t) == string::npos) cout << "-1";
    else cout << s.find(t);
    return 0;
}