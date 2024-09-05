#include <iostream>
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    int min = s1.length();

    if (min > s2.length()) {
        if (s2.length() < s3.length()) min = s2.length();
        else min = s3.length();
    }
    else {
        if (min > s3.length()) min = s3.length();
    }

    int max = s1.length();
    if (max < s2.length()) {
        if (s2.length() > s3.length()) max = s2.length();
        else max = s3.length();
    }
    else {
        if (max < s3.length()) max = s3.length();
    }

    cout << max - min;
    return 0;
}