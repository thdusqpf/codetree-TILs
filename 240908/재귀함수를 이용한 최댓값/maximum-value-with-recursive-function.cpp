#include <iostream>
using namespace std;

int FindMax(int* arr, int n) {
    //cout << " n : " << n << '\n';
    if (n == 0) return 0;
    return FindMax(arr, n - 1) > arr[n - 1] ?  FindMax(arr,n - 1) : arr[n - 1];
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << FindMax(arr, n);
    return 0;
}