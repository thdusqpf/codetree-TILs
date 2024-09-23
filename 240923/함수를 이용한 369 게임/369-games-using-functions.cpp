#include <iostream>
using namespace std;
bool Included(int n) {
    int div = 10;
    while (n > 0) {
        if (n % div == 3 ||  n % div == 6 || n % div == 9) return true;
        n /= div; // n = 31/ 10; n = 3;
    }
    return false;
}

bool IsMagigNum(int n) {
    return (n % 3 == 0) || Included(n);
}

int main() {
    int a, b, cnt;
    cin >> a >> b;
    
    cnt = 0;
    for (int i = a; i <= b; i++) {
        if (IsMagigNum(i)) {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}