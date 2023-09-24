#include <iostream>
#include <vector>
using namespace std;

void selection(int arr[], int n) {

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(arr[j]<arr[i]) {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    cout << "Sorted array is: ";

    for (int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int n;
    
    cout << "Enter size of the array: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cout << "Enter array element: ";
        cin >> arr[i]; 
    }

    selection(arr, n);

    return 0;
}