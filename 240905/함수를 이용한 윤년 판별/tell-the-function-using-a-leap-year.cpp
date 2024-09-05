#include <iostream>
using namespace std;

bool IsLeapYear(int n) {
    if (n % 4 != 0) return false;
    if (n % 100 == 0 && n % 400 != 0) return false;
    return true;
}
int main() {
    int y;
    cin >> y;
    cout << boolalpha << (IsLeapYear(y));
    return 0;
}