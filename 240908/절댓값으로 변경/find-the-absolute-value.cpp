#include <iostream>
using namespace std;

void ChangeAbs(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) arr[i] *= -1;
    }
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) 
        cin >> arr[i];
    ChangeAbs(arr, n);
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    return 0;
}