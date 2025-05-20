#include <iostream>
using namespace std;

int main() {
    int arr[12] = {4, 7, 2, 4, 7, 10, 5, 2, 9, 5, 11, 3};
    int n = 12;
    int unique_count=0;
    
    for(int i=0;i<n;i++){
        int count=0;
        
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>1){
            cout << arr[i] << " occurs = " << count << " times" << endl;
        }else{
            unique_count++;
        }
    }
    cout << "Number of unique elements = " << unique_count << endl;
}