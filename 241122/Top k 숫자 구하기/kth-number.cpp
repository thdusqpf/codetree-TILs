#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    sort(ans, ans+n);
    cout << ans[k-1];

    return 0;
}