
// Find the subarray which has the maximum sum 
// Using 3 loops 

#include <iostream>
#include <climits>
using namespace std;

int main() {

    int n;

    cout << "Enter size of the array: ";
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++) {
        cout << "Enter element: ";
        cin >> a[i];
    }

    int maxSum = INT_MIN;

    for(int i=0; i<n; i++) {
        for(int j=i; j<n; j++) {
            int sum = 0;
            for(int k=i; k<=j; k++) {
                sum += a[k];
            }
            maxSum = max(maxSum, sum);
        }
    }

    cout << maxSum << endl;

    return 0;
}