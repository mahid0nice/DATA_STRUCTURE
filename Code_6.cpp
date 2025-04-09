#include<iostream>
using namespace std;
int main(){
    int matrix[3][4]={
        {1, 6, 7, 9},
        {2, 4, 8, 5},
        {3, 1, 9, 4}
    };

    int transpose[4][3];
    for (int i = 0; i < 3; i++) {         
        for (int j = 0; j < 4; j++) {     
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transposed Matrix:" << endl;
    for (int i = 0; i < 4; i++) {        
        for (int j = 0; j < 3; j++) {    
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
