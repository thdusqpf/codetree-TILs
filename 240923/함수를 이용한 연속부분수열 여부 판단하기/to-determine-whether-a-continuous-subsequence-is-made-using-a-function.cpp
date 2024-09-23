#include <iostream>
using namespace std;


int FindStartIndex(int arr[], int size, int number)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == number) return i;
    }
    return -1;
}

bool CheckSerial(int arr[], int size, int arr2[], int size2)
{
    int index = FindStartIndex(arr, size, arr2[0]);
    if (index > -1) {
        for (int i = 1; i < size2; i++) {
            if (arr[index + 1] != arr2[i]) return false; 
            index++;
        }
        return true;
    }
    return false;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int arr[n1], arr2[n2];
    for (int i = 0; i < n1; i++)
        cin >> arr[i];

    for (int i = 0; i < n2; i++)
        cin >> arr2[i];

    if (CheckSerial(arr, n1, arr2, n2)) cout << "Yes";
    else cout << "No";
    
    return 0;
}