#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
 
    string tmp = to_string(n);
 
    for (int i = 0; i < tmp.length(); i++) {
	    sum += tmp[i] - '0';
	}
	
	cout << sum;
    return 0;
}