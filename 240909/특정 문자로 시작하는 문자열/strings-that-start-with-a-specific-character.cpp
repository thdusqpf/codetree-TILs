#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n, cnt = 0, len = 0;
    double avg;
    cin >> n;
    string str[n];
    char c;
    for (int i = 0; i < n; i++) 
        cin >> str[i];
    cin >> c;

    for (int i = 0; i < n; i++) {
        if (str[i][0] == c) {
            cnt++;
            len += str[i].length();
        }
    }
    if (cnt == 0) avg = 0;
    else  avg = len / cnt;
    cout << cnt << " ";
    cout << fixed;
    cout.precision(2);
    cout << avg;
    return 0;
}