#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Sum and Average of an array by Aaris03khan" << endl;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    cout << "enter "<< n << " numbers: " << endl;
    for(int i=0;i<n;i++){
        cout << "Enter number for arr[" << i << "]: ";
        cin >> arr[i];
    }
    double sum = 0;
    double avg = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    avg = sum/n;
    cout << "The sum is " << sum << " and the average is " << avg << "." << endl;
}
