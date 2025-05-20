#include<iostream>
using namespace std;
int main(){
    int arr1[10]={12, 32, 43, 1 ,54 ,53, 15, 64, 3, 13};
    int odd=0,even=0;

    for(int i=0; i<10; i++){
        if(arr1[i]%2==0){
            even+=1;
        }else{
            odd++;
        }
    }
    cout<<"Even : "<<even<<endl<<"Odd : "<<odd<<endl;

    
    cout << endl;
}