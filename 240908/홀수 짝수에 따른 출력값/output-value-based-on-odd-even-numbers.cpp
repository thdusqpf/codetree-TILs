#include <iostream>
using namespace std;

int F(int n) {
    if (n <= 2) return n;
    return n + F(n - 2);
    
}

int main() {
    int n;
    cin >> n;

    cout << F(n);
    return 0;
}