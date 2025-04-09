#include <iostream>
using namespace std;

void removeDuplicates(int arr[], int &size) {
    int unique[size];
    int newSize = 0;

    for (int i = 0; i < size; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            unique[newSize] = arr[i];
            newSize++;
        }
    }

    if (newSize == size) {
        cout << "Array already unique!" << endl;
        return;
    }

    for (int i = 0; i < newSize; i++) {
        arr[i] = unique[i];
    }
    size = newSize;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[] = {1, 4, 6, 3,3, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    removeDuplicates(arr1, size1);


    return 0;
}