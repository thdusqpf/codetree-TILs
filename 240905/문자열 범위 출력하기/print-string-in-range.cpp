#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    for (int i = 2; i < 10; i++) {
        cout << s[i];
    }
    return 0;
}