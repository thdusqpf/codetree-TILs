#include <iostream>
#include <algorithm>
using namespace std;

bool isSame(int* arr1, int* arr2, int n)
{
    sort(arr1, arr1+n);
    sort(arr2, arr2+n);
    for (int i = 1; i < n; i++)
    {
        if (arr1[i] != arr2[i]) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    int arr1[n], arr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

      for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    if (isSame(arr1, arr2, n)) cout << "Yes";
    else cout << "No";
    return 0;
}