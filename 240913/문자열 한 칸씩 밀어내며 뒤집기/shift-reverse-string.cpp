#include <iostream>
using namespace std;

int main() {
    string s, tmp = "";
    int n;
    cin >> s >> n;

    while (n--) {
        int command;
        cin >> command;
        int len = s.length();
        if (command == 1) {
            s = s.substr(1, len - 1) + s.substr(0, 1);
        }

        else if (command == 2) {
            s = s.substr(len - 1, 1) + s.substr(0, len - 1);
        }

        else {
            tmp ="";
            for (int i = len - 1; i >= 0; i--) {
                tmp += s.substr(i, 1);
               
            }
             s = tmp;
        }
        cout << s << '\n';
    }
    return 0;
}