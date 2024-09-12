#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++) {
	if (isalpha(s[i])) {
		// 아스키코드 이용해서 변환
		if (isupper(s[i])) cout << s[i];
		else cout << (char)(s[i] - 'a' + 'A');
		}
	}

    return 0;
}