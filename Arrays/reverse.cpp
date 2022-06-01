#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Reversing a string by Aaris03khan" << endl;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "enter "<< n << " numbers: " << endl;
    for(int i=0;i<n;i++){
        cout << "Enter number for arr[" << i << "]: ";
        cin >> arr[i];
    }
    int temp = 0;
    for(int i=0; i < (n/2); i++){
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    cout << "The reversed array is: " << endl;
    for(int i=0;i<n;i++){
        cout << "arr[" << i << "]: " << arr[i] <<endl;
    }
}
