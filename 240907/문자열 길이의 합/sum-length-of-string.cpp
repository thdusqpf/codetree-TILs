#include <iostream>
using namespace std;

int main() {
    int n, ans = 0, cnt = 0;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        ans += str[i].length();
        if (str[i][0] == 'a') cnt++;
    }
    cout << ans << " " << cnt;
    return 0;
}