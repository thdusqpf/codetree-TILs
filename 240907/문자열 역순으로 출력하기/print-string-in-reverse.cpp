#include <iostream>
using namespace std;

int main() {
    int n = 4;
    string strs[n];
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }
    for (int i = n - 1; i >= 0; i--) 
        cout << strs[i] << '\n';
    return 0;
}