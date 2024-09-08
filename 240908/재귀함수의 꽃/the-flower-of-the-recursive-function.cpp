#include <iostream>
using namespace std;

void PrintNum(int n) {
    if (n == 0) return;
    cout << n << " ";
    PrintNum(n - 1);
    cout << n << " ";
}
int main() {
    int n;
    cin >> n;
    PrintNum(n);
    return 0;
}