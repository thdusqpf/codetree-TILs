#include <iostream>
#include <math.h>

using namespace std;

void FindMin(int a, int b, int c) {
    int minimum = min(a, b);
    minimum = min(minimum, c);
    cout << minimum;
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;

    FindMin(a, b, c);
    return 0;
}