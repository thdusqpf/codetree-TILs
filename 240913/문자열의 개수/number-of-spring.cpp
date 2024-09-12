#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[200];
    int cnt = 0;
    for (int i = 0; i < 200; i++) {
	cin >> str[i];
	if (str[i] == "0") break;
	cnt++;
	}
	
	cout << cnt << '\n';
	for (int i = 0; str[i] != "0"; i++) {
		if (i % 2 == 0) cout << str[i] << '\n';
	}
    return 0;
}