#include <iostream>
using namespace std;

int gcd(int n, int m) 
{
    int gcd = 0;
    for (int i = 1; i <= min(n, m); i++) {
        if (n % i == 0 && m % i == 0)
            gcd = i;
    }
    return gcd;
}

int lcm(int n, int m) 
{
    int lcm = n * m / gcd(n, m);
    return lcm;

}
int main() {
    int n, m;
    cin >> n >> m;

    cout << lcm(n, m);
    return 0;
}