#include <iostream>
using namespace std;

void natsum(int n) {

    int sum = 0;

    for(int i=1; i<=n; i++) {
        sum = sum+i;
    }

    cout << "Sum of " << n << " natural no. is: " << sum << endl;
}


int main() {

    int n;

    cout << "Enter no. to find sum: ";
    cin >> n;

    natsum(n);
    
    return 0;
}