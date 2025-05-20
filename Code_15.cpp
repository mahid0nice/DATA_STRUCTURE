#include<iostream>
using namespace std;

struct Visa{
    string visa_type;

};
    
void day_summary(int tr, int med, int bs, int go){
    cout<<"\nDay Summary:" << endl;
    cout<<"Travel (TR): "<<tr<< endl;
    cout<<"Medical (MED): "<<med<< endl;
    cout<<"Business (BS): "<<bs<<endl;
    cout<<"Government official (GO): "<<go<<endl;
}
int main(){
    Visa visa[100];
    int tr=0;
    int med=0;
    int bs=0;
    int go=0;
    int count=0;

    cout<<"For travel visa write: (tr)\nFor medical visa write: (med)\nFor business visa write: (bs)\nFor government officials visa write: (go)"<<endl;
    
    for(int i=1; i<=100; i++){
        cout<<"Enter Visa type: ";
        cin>>visa[i].visa_type;
        if(visa[i].visa_type=="tr"&& tr<=25){
            cout<<"Your token is: TR-"<<i<<endl;
            tr+=1;
        }
        if(visa[i].visa_type=="med"&& med<=25){
            cout<<"your token is: MED-"<<i<<endl;
            med+=1;
        }
        if(visa[i].visa_type=="bs" && bs<=25){
            cout<<"your token is: BS-"<<i<<endl;
            bs+=1;
        }
        if(visa[i].visa_type=="go" && go<=25){
            cout<<"your token is: GO-"<<i<<endl;
            go+=1;
        }if(visa[i].visa_type!="tr" && visa[i].visa_type!="med" && visa[i].visa_type!="bs" && visa[i].visa_type!="go" || visa[i].visa_type=="close"){
            cout<<"Invalid visa type"<<endl;
            break;
        }
    }
    day_summary(tr,med,bs,go);

    int arr[4]={tr,med,bs,go};
    int max= arr[0];
    for(int i=0;i<4;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    
    for(int i=1;i<=100;i++){
        if(visa[i].visa_type=="tr"){
            cout<<"Call next customer."<<endl;
            cout<<"Counter 1, please serve the token number "<<visa[i].visa_type<<"-"<<i<<endl;
            
        }
    }

    for(int i=1;i<=100;i++){
        if(visa[i].visa_type=="med"){
            cout<<"Call next customer."<<endl;
            cout<<"Counter 2, please serve the token number "<<visa[i].visa_type<<"-"<<i<<endl;
        }
    }
    
    for(int i=1;i<=100;i++){
        if(visa[i].visa_type=="bs"){
            cout<<"Call next customer."<<endl;
            cout<<"Counter 3, please serve the token number "<<visa[i].visa_type<<"-"<<i<<endl;
        }
    }

    for(int i=1;i<=100;i++){
        if(visa[i].visa_type=="go"){
            cout<<"Call next customer."<<endl;
            cout<<"Counter 4, please serve the token number "<<visa[i].visa_type<<"-"<<i<<endl;
        } 
    }
}