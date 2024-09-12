#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    s = s.substr(1)+ s.substr(0, 1);
    cout << s;
    
    return 0;
}