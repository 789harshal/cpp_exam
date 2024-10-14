#include <iostream>

using namespace std;

int main()
{
    int row, col;

    cout << "Enter the row : ";
    cin >> row;

    cout << "Enter rhe cols : ";
    cin >> col;

    cout  << endl;

    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "enter the value : ";
            cin >> arr[i][j];
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int k,srow,scol;

    cout << "enter the row :";
    cin >> srow; 
   
    for ( k = 0; k < col; k++)
    {
        cout << arr[srow][k] << " ";
    }
    
    
    cout << endl;
    

    return 0;
}