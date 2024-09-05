#include <iostream>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int len1 = s1.length();
    int len2 = s2.length();

    if (len1 == len2) cout << "same";
    else if (len1 > len2) cout << s1 << " " << len1;
    else cout << s2 << " " << len2;
    return 0;
}