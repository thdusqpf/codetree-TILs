#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;

    if (x == 'a') cout << 'z';
    else cout << char(x - 1);
}