#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string str[11];

    for (int i = 1; i <= 10; i++) 
        cin >> str[i];
    
    for (int i = 1; i <= 10; i++) {
        if (i % 2 == 1) cout << str[i] << "\n";
    }
    return 0;
}