#include<iostream>
using namespace std;
int main(){
    float r[5]={22.5,34.8,46.8,59.1,68.3};
    cout<<"1st element : "<<r[0]<<endl;
    cout<<"1st element : "<<*r<<endl;
    cout<<"3rd element : "<<*(r+2)<<endl<<endl;

    float *p;
    p=r;
    cout<<"1st element : "<<p[0]<<endl;
    cout<<"1st element : "<<*p<<endl;
    cout<<"3rd element : "<<p[2]<<endl;
    cout<<"3rd element : "<<*(p+2)<<endl<<endl;

    for(int i =0; i<5;i++){
        cout<<"Element : "<<(i+1)<<"is : "<<*(p+i)<<endl;
    }

}