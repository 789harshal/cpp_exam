#include<iostream>

using namespace std;

int main(){

    int size ,lar = 0;
    
    cout << "enter the size of array :";
    cin >> size;

    int arr[size];

    for(int i = 0;i < size ; i++){
        cout << "enter value :";
        cin >> arr[i];
    }
    for(int i = 0;i < size ; i++){
       lar = lar < arr[i];
    }
    cout << lar;

return 0;
}

