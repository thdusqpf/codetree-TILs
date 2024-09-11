#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string ret = "";
    while (n--) {
        string s;
        cin >> s;
        ret += s;
    }

    cout << ret;
    return 0;
}