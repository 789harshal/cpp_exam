#include<iostream>

using namespace std;

int main(){

    int row , col;

    cout << "enter rows :";
    cin >> row;

    cout << "enter col :";
    cin >> col;
    
    int arr[col][row];

    for(int i=0 ;i<row;i++){
        for(int j = 0 ; j < col;j++){
            cout << "enter the value : "<< " ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < col;i++){
        for(int j = 0;j < row; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    } 

return 0;
}