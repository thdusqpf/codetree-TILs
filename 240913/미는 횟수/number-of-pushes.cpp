#include <iostream>
using namespace std;

int main() {
    string a, b;
    int n = 0;
    

    cin >> a >> b;
    int len = a.length();

    while(1) {
        a = a.substr(len - 1, 1) + a.substr(0, len - 1);
        n++;
        if (a == b || n == len) break;
    }
    if (n == 0) cout << -1;
    else cout << n;

    return 0;
}