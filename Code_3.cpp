#include<iostream>
using namespace std;

void merge_reverse(int arr1[],int size1,int arr2[],int size2){
    int merf[100];
    int a = 0;

    for(int i = 0; i<size1; i++){
        merf[a]= arr1[i];
        a++;    
    }
    for (int i =0; i<size2; i++)
    {
        merf[a] = arr2[i];
        a++;
    
    }
    
    for(int i=a-1; i>=0; i--){
        cout<< merf[i] <<" ";
    
}
}

int main(){
    int arr1[] = {10,20,30,40,50};
    int arr2[] = {1,2,3,4,5,6,7,8};
    
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);

    merge_reverse(arr1,size1,arr2,size2);
}
