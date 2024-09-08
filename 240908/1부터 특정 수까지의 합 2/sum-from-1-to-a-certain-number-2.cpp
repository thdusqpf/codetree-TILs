#include <iostream>
using namespace std;

int RecurSum(int n) {
    if (n == 0) return 0;
     return n + RecurSum(n - 1);
}
int main() {
    int n;
    cin >> n;

    cout << RecurSum(n);
    return 0;
}