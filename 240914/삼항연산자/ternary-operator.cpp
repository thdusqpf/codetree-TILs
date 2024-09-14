#include <iostream>
using namespace std;

int main() {
    int score;
    cin >> score;

    string ret = score == 100 ? "pass" : "failure";
    cout << ret;
    return 0;
}