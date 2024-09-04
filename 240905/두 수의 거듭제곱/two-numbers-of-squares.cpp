#include <iostream>
using namespace std;

int Exp(int a, int b) {
    int mul = 1;
    for (int i = 1; i <= b; i++) {
        mul *= a;
    }
    return mul;
}
int main() {
    int a, b;
    cin >> a >> b;
    cout << Exp(a, b);
    return 0;
}