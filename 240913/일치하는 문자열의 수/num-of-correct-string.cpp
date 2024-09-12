#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    string a;
    cin >> n >> a;

    while (n--) {
        string b;
        cin >> b;
        if (a == b) cnt++;
    }

    cout << cnt;
    return 0;
}