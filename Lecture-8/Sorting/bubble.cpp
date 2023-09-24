#include <iostream>
#include <vector>
using namespace std;

void bubble(int arr[], int n) {

     int counter=1;
    
    while(counter<n) {
        for(int i=0; i<n-counter; i++) {
            if(arr[i]>arr[i+1]) {
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
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

    bubble(arr, n);
    
    return 0;
}