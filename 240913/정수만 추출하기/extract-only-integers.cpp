#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;

int main() {
    int n = 2, sum = 0;
    string tmp;

    while (n--) {
	    string s;
	    cin >> s;
	    tmp = "";
	    for (int i = 0; i < s.length(); i++) {
		    if (isdigit(s[i])) tmp += s[i];
		    else break;
	    }
	    sum += stoi(tmp);
	}
	cout << sum;

    return 0;
}