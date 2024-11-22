#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define MAX_N 100

int main() {
    int n, k;
    string t;
    string words[MAX_N];

    cin >> n >> k >> t;

    for (int i = 0; i < n; i++)
        cin >> words[i];

    sort(words, words + n);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (t[0] == words[i][0] && t[1] == words[i][1]) count++;
        if (count == k) cout << words[i];
    }



    return 0;
}