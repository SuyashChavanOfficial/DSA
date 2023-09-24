#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {

    int n;
    
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++) {
        cout << "Enter element of array: ";
        cin >> arr[i]; 
    }

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0; i<n; i++) {
            maxNo = max(maxNo, arr[i]) ;
            minNo = min(minNo, arr[i]) ;
    }

    cout << "Max value is: " << maxNo << endl;
    cout << "Min value is: " << minNo << endl;

    return 0;
}
