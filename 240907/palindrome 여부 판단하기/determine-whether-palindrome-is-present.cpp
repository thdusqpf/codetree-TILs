#include <iostream>
using namespace std;

bool isPalindrome(string& s) {
    string tmp = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        tmp += s[i];
    }
    if (s == tmp) return true;
    else return false;
}
int main() {
    string a;
    cin >> a;
    if (isPalindrome(a)) cout << "Yes";
    else cout << "No";

    return 0;
}