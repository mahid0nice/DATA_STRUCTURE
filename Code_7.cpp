#include <iostream>
using namespace std;

int main() {
    int arr[] = {92, 82, 21, 16, 18, 95, 25, 10};
    int size = 8;
    int temp;

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i != size - 1) cout << ", ";
    }
    cout << endl;


    int tar;
    cout << "Enter number to search: ";
    cin >> tar;

    int low = 0;
    int high = size - 1;
    int comp = 0;
    bool found = false;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        comp++;

        if (arr[mid] == tar) {
            cout << tar << " found at index " << mid << " in the sorted array" << endl;
            found = true;
            break;
        } else if (arr[mid] < tar) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    cout << "Number of comparisons = " << comp << endl;

    return 0;
}
