#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str[n];
    string ret = "";

    for (int i = 0; i < n; i++) {
        cin >> str[i];
        ret += str[i];
    }

    for (int i = 0; i < ret.length(); i++) {
        if (i != 0 && i % 5 == 0) 
            cout << '\n';
        cout << ret[i];
    }
        
    return 0;
}