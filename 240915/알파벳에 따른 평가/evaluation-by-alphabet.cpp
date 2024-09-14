#include <iostream>
using namespace std;

int main() {
    char u;
    cin >> u;

    if (u == 'S') cout << "Superior";
    else if (u == 'A') cout << "Excellent";
    else if (u == 'B') cout << "Good";
    else if (u == 'C') cout << "Usually";
    else if (u == 'D') cout << "Effort";
    else cout << "Failure";
    return 0;
}