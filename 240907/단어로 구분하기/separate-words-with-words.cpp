#include <iostream>
using namespace std;

int main() {
    int n = 10;
    string s[n];
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    for (int i = 0; i < n; i++) {
        cout << s[i] << '\n';
    }
    
    return 0;
}