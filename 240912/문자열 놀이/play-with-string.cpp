#include <iostream>
using namespace std;

int main() {
    string s;
    int q;
    
    cin >> s >> q;

    while (q--) {
        int n;
        cin >> n;
        if (n == 1) {
            int first, second;
            cin >> first >> second;

            char tmp = s[first - 1];
            s[first - 1] = s[second - 1];
            s[second - 1] = tmp;
        }
        
        else if (n == 2) {
            char source, target;
            cin >> source >> target;

            for (int i = 0; i < s.length(); i++) {
                if (s[i] == source) s[i] = target;
            }
        }
    cout << s << '\n';
    } 

    return 0;
}