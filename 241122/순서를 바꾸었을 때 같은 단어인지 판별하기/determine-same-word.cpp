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
    int count[128];

    cin >> s1 >> s2;

    for (int i = 0; i < 128; i++)
    {
        count[i] = 0;
    }

    for (int i = 0; i < s1.size(); i++)
    {
        count[s1[i]]++;
    }
    
    for (int i = 0; i < s2.size(); i++)
    {
        count[s2[i]]--;
    }

    for (int i = 0; i < 128; i++)
    {
        if (count[i] != 0) cout << "No";
        return 0;
    }
    cout << "Yes";
    // if (isSame(s1, s2)) cout << "Yes";
    // else cout << "No";
    return 0;
}