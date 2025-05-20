#include<iostream>
using namespace std;
int main()
{int x;
x = 10;
int*p;
p = &x;
int y;
y = *p;
cout<<"Address of integer variable x:"<<&x;
cout<<endl;
cout<<"Value stored in the memory area of variable x: "<<x;
cout<<endl;
cout<<"Address of integer pointer variable *p: "<<&p;
cout<<endl;
cout<<"Address stored in the area of pointer variable *p:"<<p;
cout<<endl;
cout<<"Address of integer variable y: "<<&y;
cout<<endl;
cout<<"Value pointed to by the pointer *p: "<<*p;
cout<<endl;
cout<<"Value stored in the memory area of variable y:"<<y;}