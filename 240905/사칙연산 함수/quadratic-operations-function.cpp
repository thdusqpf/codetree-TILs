#include <iostream>
using namespace std;

int Sum(int a, int b) {
    return a + b;
}

int Sub(int a, int b) {
    return a - b;
}

int Mul(int a, int b) {
    return a * b;
}

int Div(int a, int b) {
    return a / b;
}
int main() {
    int a, c;
    char o;
    cin >> a >> o >> c;

    if (o == '+') cout << a << " + " << c << " = " << Sum(a, c);
    else if (o == '-') cout << a << " - " << c << " = " << Sub(a, c);
    else if (o == '*') cout << a << " * " << c << " = " << Mul(a, c);
    else if (o == '/') cout << a << " / " << c << " = " << Div(a, c);
    else cout << "False";
    return 0;
}