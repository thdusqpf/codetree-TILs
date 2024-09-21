#include <iostream>
using namespace std;

bool isPrime(int n) 
{
    for (int i = 2; i < n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

bool isMagicNum(int n) {
    if (n == 100 || n == 1) return false;
    return ((n % 10 + n / 10) % 2 == 0) && isPrime(n);
}

int main() {
    int a, b;
    cin >> a >> b;
    //a = 1, b = 100;
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (isMagicNum(i)) cnt++;
    }

    cout << cnt;
    return 0;
}