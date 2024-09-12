#include <iostream>
using namespace std;

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;

    string ret = to_string(a + b);
    for (int i = 0; i < ret.length(); i++) {
	    if (ret[i] == '1' ) cnt++;
	}
	cout << cnt;
    return 0;
}