#include<iostream>
using namespace std;

int main(){

    int A[10]={2,4,6,8,10,12,14,16,18,20};
    int B[10]={1,3,5,7,9,11,13,15,17,19};
    int C[100];

    for(int i=0;i<10;i++){
        A[i]=A[i]*5;
        B[i]=B[i]*5;
    
    }
    int j=10;
    for(int i=0;i<j/2;i++){
        
        int temp=A[i];
        A[i]=A[j-1-i];
        A[j-1-i]=temp;
        
    }
    int k=10;
    for(int i=0;i<k/2;i++){
        int temp=B[i];
        B[i]=B[k-i-1];
        B[k-i-1]=temp;
    }
    for(int i=0;i<20;i++){
        if(i<10){
            C[i]=A[i];
        }else{
            C[i]=B[i-10];
        }
    }
     
    for(int i = 0;i<20;i++){
        cout<<C[i]<<" ";
    
    }
}
    

    

    

