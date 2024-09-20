#include <iostream>
#include <math.h>
using namespace std;

int mx;
int GCD(int n, int m) {
    for (int i = 1; i <= min(n, m); i++) {
        if (12 % i == 0 && 18 % i == 0) 
            mx = i;
    }
    return mx;
}
int main() {
    int n, m;
    cin >> n >> m;
    cout << GCD(n, m);

    return 0;
}