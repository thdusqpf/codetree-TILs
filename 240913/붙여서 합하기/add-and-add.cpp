#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    string tmp = a + b;
    string rev = b + a;

    cout << stoi(tmp) + stoi(rev);
    return 0;
}