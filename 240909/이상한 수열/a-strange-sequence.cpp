#include <iostream>
#include <math.h>
using namespace std;

int F(int n) {
    if (n == 1 || n == 2) return n;
    return F(floor(n/3)) + F(n - 1); 
}
int main() {
    int n;
    cin >> n;
    cout << F(n);
    return 0;
}