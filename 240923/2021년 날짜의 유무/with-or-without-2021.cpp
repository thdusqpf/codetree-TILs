#include <iostream>
using namespace std;

bool IsDate(int m, int n)
{
    if (m == 2) {
        if (1 <= n && n <= 28) return true;
    }
    else if (m == 4 || m == 6 || m == 9 || m == 10) {
        if (1 <= n && n <= 30) return true;
    }
    else if (m <= 12) {
        if (1 <= n && n <= 31) return true;
    }
    return false;
}
int main() {
    int m, d;
    cin >> m >> d;

    if (IsDate(m, d)) cout << "Yes";
    else cout << "No";
    return 0;
}