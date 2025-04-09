#include<iostream>
using namespace std;

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; 
    int size = 5;

    cout << "Original array:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int nE = 60;
    arr[size] = nE;
    size++;
        
    cout<<endl<<size<<endl;
    cout << "\nAfter inserting " << nE << " at the end:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int nB = 5;
    for (int i = size; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = nB;
    size++;

    cout << "\nAfter inserting " << nB << " at the beginning:\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    int nR = 99;
    int pos = 4;

    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = nR;
    size++;

    cout << "\nAfter inserting " << nR << " at position " << pos << ":\n";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}