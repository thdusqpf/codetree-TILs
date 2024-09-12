#include <iostream>
using namespace std;

int main() {
     int t, sum = 0;
    cin >> t;
 
    while(t--) {
	    int n;
	    cin >> n;
	    sum += n;
	}
	
	string tmp = to_string(sum);
    tmp = tmp.substr(1, tmp.length() - 1) + tmp.substr(0, 1);
    cout << tmp;
	
    return 0;
}