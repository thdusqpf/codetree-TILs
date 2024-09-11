#include <iostream>
using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;

    if (s.find(c) == string::npos) cout << "No";
    else cout << s.find(c);
    return 0;
}