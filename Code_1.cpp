#include<iostream>
using namespace std;

int main(){
    int a, b, i;
    int mimo[5]; // Declare and initialize the array

    mimo[2] = 75;
    a = mimo[2];
    cin >> mimo[2];

    for(i = 0; i < 5; i++) {
        cin >> mimo[i];
    }

    for(i = 0; i < 5; i++) {
        cout << mimo[i] << " ";
    }

    a = 4;
    cout << endl;
    cout << a << endl;

    mimo[2] = 4;
    cout << mimo[2] << endl;

    mimo[a] = 3;
    cout << mimo[a] << endl;

    b = mimo[a-2] + 2;
    cout << b << endl;

    mimo[mimo[a]] = mimo[2] + b;
    cout << mimo[mimo[a]] << endl;

    return 0;
}