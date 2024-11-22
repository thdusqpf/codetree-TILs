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
        bool isSame = true;
        for (int j = 0; j < t.size(); j++)
        {
            if (t[j] != words[i][j]) 
            {
                isSame = false;
                break;
            } 
        }
        if (isSame) count++;
        if (count == k) 
        {
            cout << words[i];
            break;
        }            
    }

    return 0;
}