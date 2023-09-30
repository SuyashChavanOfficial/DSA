
// MAXIMUM CIRCULAR SUBARRAY

// maxSum = totalSum - (Sum of non-contributing subarray)

#include <iostream>
using namespace std;

int kadane(int arr[], int n) {
    int currSum = 0;
    int maxSum = INT_MIN;

    for(int i=0; i<n; i++) {
        currSum += arr[i];
        if(currSum < 0) {
            currSum = 0;
        }
        maxSum = max(maxSum, currSum);
    }

    return maxSum;
}

int main() {

    int n;
    cin >> n;

    int a[n];

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    int wrapSum;
    int nonWrapSum;

    nonWrapSum = kadane(a, n);

    int totalSum = 0;
    for(int i=0; i<n; i++) {
        totalSum += a[i]; 
        a[i] = -a[i];
    }

    wrapSum = totalSum + kadane(a, n);

    cout << max(wrapSum, nonWrapSum) << endl;

    return 0;
}