#include <iostream>
#include <vector>
using namespace std;

void insertion(int arr[], int n) {

    for(int i=1; i<n; i++) {
        int current = arr[i];
        int j = i-1;
        while(arr[j] > current && j>=0) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }

    cout << "Sorted array is: ";
    for(int i=0; i<n; i++) {
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

    insertion(arr, n);
    
    return 0;
}