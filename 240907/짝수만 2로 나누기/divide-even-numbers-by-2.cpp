#include <iostream>
using namespace std;

void Func(int a[], int size) {
    for (int i = 0; i < size; i++) {
        if (a[i] % 2 == 0) a[i] /= 2;
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++) 
        cin >> arr[i];

    Func(arr, n);
    
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    return 0;
}