#include <iostream>
using namespace std;

int main() {
    string fruit[5] = {"appel", "banana", "grape", "blueberry", "orange"};
    char c;
    cin >> c;
    int ans = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 2; j <= 3; j++) {
            if (fruit[i][j] == c) {
                cout << fruit[i] << '\n';
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}