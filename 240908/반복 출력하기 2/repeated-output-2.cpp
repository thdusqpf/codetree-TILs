#include <iostream>
using namespace std;

void PrintHello(int n) {
    if (n == 0) return;

    PrintHello(n - 1);
    cout << "HelloWorld\n";
}
int main() {
    int n;
    cin >> n;
    PrintHello(n);
    return 0;
}