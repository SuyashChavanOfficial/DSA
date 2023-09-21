#include <iostream>
using namespace std;

int fact(int n) {

    int fact=1;

    for(int i=n; i>=2 ; i--) {
        fact *= i;
    }

    return fact;
}

int ncr(int n, int r) {
    
    int ncr;

    ncr = fact(n)/(fact(n-r)*fact(r));

    return ncr;
}

void pascal(int n) {

    for(int i=0;i<=n; i++) {
        for(int j=0; j<=i; j++) {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {

    int n;

    cout << "Enter no. to find pascal numbers: ";
    cin >> n;

    pascal(n);
}