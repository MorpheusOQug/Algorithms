#include <iostream>
using namespace std;

void insertionSort(int a[], int array_size) {
    int i, j, last;
    for (i = 1; i < array_size; i++) {
        last = a[i];
        j = i;
        while ((j > 0) && (a[j - 1] > last)) {
            a[j] = a[j - 1];
            j = j - 1;
        }
        a[j] = last;
    }
}

int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    insertionSort(arr, n);

    cout << "\nSorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
