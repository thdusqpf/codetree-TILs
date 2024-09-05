#include <iostream>
using namespace std;

bool IsOnjeon(int n) {
    if (n % 2 == 0) return false;
    if (n % 10 == 5) return false;
    if (n % 3 == 0 && n % 9 != 0) return false;
    return true;
}

int main() {
    int a, b, ans = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if (IsOnjeon(i)) ans++;
    }
    cout << ans;
    return 0;
}