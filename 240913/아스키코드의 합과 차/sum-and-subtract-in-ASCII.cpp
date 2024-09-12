#include <iostream>
using namespace std;

int main() {
    char a, b;
    cin >> a >> b;
    cout << (int)a + (int)b << " ";
    int ret = 0;
    if ((int)a > (int)b) ret = (int)a - (int)b;
    else ret = (int)b - (int)a;

    cout << ret;
    return 0;
}