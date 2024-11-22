#include <iostream>
#include <algorithm>
using namespace std;

bool isSame(string s1, string s2)
{
    if (s1.length() != s2.length()) return false;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i]) return false;
    }
    return true;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    
    if (isSame(s1, s2)) cout << "Yes";
    else cout << "No";
    return 0;
}