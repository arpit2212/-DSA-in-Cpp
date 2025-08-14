#include <bits/stdc++.h>
using namespace std;

void sorting(int arr[], int n) {
    sort(arr, arr + n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

   
}

int main() {
    int n;

    cout << "Enter the size of the array: ";
    cin >> n;

    // Dynamically allocate the array
    int* arr = new int[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sorting(arr, n);

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}