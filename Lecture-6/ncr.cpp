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

int main() {

    int n,r;

    cout << "Enter n and r to find nCr: ";
    cin >> n >> r; 

    cout << "The nCr of " << n << " and " << r << " is: " << ncr(n,r) << endl;
}