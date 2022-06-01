#include <iostream>

using namespace std;

int main()
{
    cout << "Taking Input for Two Dimentional Array and Printing it by Aaris03khan" << endl;
    int r,c;
    cout << "Enter no. of Rows: ";
    cin >> r;
    cout << "Enter no. of Columns: ";
    cin >> c;
    int arr[r][c];
    cout << "Enter the array numbers: " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "Enter array["<<i<<"]["<<j<<"]: ";
            cin >> arr[i][j];
        }
    }
    cout << "The Two Dimentional array entered is: " << endl;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout << "Array["<<i<<"]["<<j<<"]: ";
            cout << arr[i][j] << endl;
        }
    }
}
