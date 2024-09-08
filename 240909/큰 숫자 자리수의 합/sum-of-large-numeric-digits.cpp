#include <iostream>
using namespace std;
#define ll long long

int F(ll n) {
    if (n < 10) return n;
    return F(n / 10) + n % 10; 
}
int main() {
    int n =  3;
    ll mul = 1;
    while (n--) {
       int i;
       cin >> i;
       mul *= i; 
    }

    cout << F(mul);
    return 0;
}