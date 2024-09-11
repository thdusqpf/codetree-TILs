#include <iostream>
using namespace std;

bool IsSame(string& s1, string& s2) {
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i]) return false;
    }
    return true;
}

int main() {
    string a, b;
    cin >> a >> b;
    string s1 = a + b;
    string s2 = b + a;
    if (IsSame(s1, s2)) cout << "true";
    else cout << "false";

    return 0;
}