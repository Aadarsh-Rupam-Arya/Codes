#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int elem = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > elem) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = elem;
    }
}

int main() {
    int arr[] = {5, 2, 8, 12, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

