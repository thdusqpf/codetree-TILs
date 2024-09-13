#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[n][n] = {};
    int num = 1;

    for (int c = 0; c < n; c++) {
        for (int r = 0; r < n; r++) {
            a[r][c] = num++;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
    return 0;
}