#include <iostream>
using namespace std;

int main() {

    //int array[4] = {10, 20, 30, 40}; basic way of creating an array

    //CREATING ARRAY TAKING INPUTS FROM THE USER
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    
    // for taking array elements as input 
    for(int i=0; i<n; i++) {
        cout << "Enter element of array: ";
        cin >> arr[i]; 
    }

    // printing array elements 
    cout << "Elements of array are: ";
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}