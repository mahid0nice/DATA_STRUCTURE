#include <iostream>
using namespace std;

void analyze(int array[], int size) {
    int unique[20];
    int u_size = 0;

    for (int i = 0; i < size; i++) {
        bool dub = false;
        for (int j = 0; j < u_size; j++) {
            if (array[i] == unique[j]) {
                dub = true;
                break;
            }
        }
        if (!dub) {
            unique[u_size++] = array[i];
        }
    }

    int u_count = 0;
    for (int i = 0; i < u_size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (unique[i] == array[j]) {
                count++;
            }
        }

        if (count > 1) {
            cout << unique[i] << " occurs = " << count << " times" << endl;
        } else {
            u_count++;
        }
    }

    cout << "Number of unique elements = " << u_count << endl;
}

int main() {
    int arr[] = {4, 7, 2, 4, 7, 10, 5, 2, 9, 5, 11, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    analyze(arr, size);

    return 0;
}