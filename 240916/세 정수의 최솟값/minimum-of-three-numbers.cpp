#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a <= b && a <= c) cout << a;
    if (b <= c) cout << b;
    if(c <= a) cout << c;
    return 0;
}