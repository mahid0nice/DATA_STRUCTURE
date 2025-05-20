#include<iostream> //insertion sort
using namespace std;
void insertionsort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;

        }
        arr[j+1]= key;
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }
    cout<<endl;
}

int main(){
            int arr[10]={12,32,43,1,54,53,15,64,3,13};
            int n = sizeof(arr)/sizeof(arr[0]);
            insertionsort(arr,n);
            printarray(arr,n);

}
/*
// Pseudo code for the given C++ program

// Function to perform insertion sort
function insertionsort(array, size):
    for i from 1 to size-1:
        key = array[i]
        j = i - 1
        while j >= 0 and array[j] > key:
            array[j + 1] = array[j]
            j = j - 1
        end while
        array[j + 1] = key
    end for
end function

// Function to print the array
function printarray(array, size):
    for i from 0 to size-1:
        print array[i], ", "
    end for
    print newline
end function

// Main function
function main():
    array = [12, 32, 43, 1, 54, 53, 15, 64, 3, 13]
    size = length of array
    call insertionsort(array, size)
    call printarray(array, size)
end function
*/