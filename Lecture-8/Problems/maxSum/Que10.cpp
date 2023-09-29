
// Find the subarray which has the maximum sum 
// Using cumulative sum approach

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

    int currSum[n+1];
    currSum[0] = 0;

    for(int i=1; i<=n; i++) {
        currSum[i] = currSum[i-1] + a[i-1];
    }

    int maxSum = INT_MIN;

    for(int i=1; i<=n; i++) {
        int sum = 0;
        for (int j=0 ; j<i; j++) {
            sum = currSum[i] - currSum[j];
            maxSum = max(maxSum, sum);
        }
    }

    cout << maxSum << endl;

    return 0;
}