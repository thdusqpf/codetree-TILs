#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int start_pos = s.find('e', 1);
    s.erase(start_pos, 1);
    cout << s;
    return 0;
}