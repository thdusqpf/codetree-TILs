#include <iostream>
using namespace std;

int main() {
    char t[5][3];
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++)
            cin >> t[i][j];
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++)
            cout << (char)(t[i][j] - 'a' + 'A') << " ";
        cout << '\n';
    }
    return 0;
}