#include<iostream>

using namespace std;

int main(){

    int size;
    
    cout << "enter the size of array :";
    cin >> size;

    int arr[size];

    for(int i = 0;i < size ; i++){
        cout << "enter value :";
        cin >> arr[i];
    }
    
    for(int i = 0;i < size ; i++){
        if(arr[i]<0){
            cout << arr[i] << " ";
        }
    }
    

return 0;
}