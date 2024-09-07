#include <iostream>
using namespace std;

int main() {
    int n = 10, ans = 0;
    string str[n];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        ans += str[i].length();
    }
    cout << ans;

    return 0;
}