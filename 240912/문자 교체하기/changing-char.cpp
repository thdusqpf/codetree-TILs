#include <iostream>
using namespace std;

int main() {
    string source, target;
    cin >> source >> target;

    for (int i = 0; i < 2; i++) {
        target[i] = source[i];
    }
    cout << target;
    return 0;
}