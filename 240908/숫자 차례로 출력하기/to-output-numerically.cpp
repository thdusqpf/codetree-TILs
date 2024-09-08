#include <iostream>
using namespace std;

void PrintNum(int n) {
    if (n == 0) return;
    PrintNum(n - 1);
    cout << n << " ";
}
void PrintNum2(int n) {
    if (n == 0) return;
    cout << n << " ";
    PrintNum2(n - 1);
}
int main() {
    int n;
    cin >> n;
    PrintNum(n);
    cout << '\n';
    PrintNum2(n);
    return 0;
}