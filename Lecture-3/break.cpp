#include <iostream>
using namespace std;

int main() {

    // PRINT NUMBERS 1 TO 100 AND SKIP NUMBERS WHICH ARE DIVISIBLE BY 3 
    for(int i = 1; i <= 100; i++) {
        if(i % 3 == 0) {
            continue;
        }
        cout << i << endl;
    }

    // CHECK NUMBER IS PRIME OF NOT 
    int a, i;

    cout<< "Enter a number to check prime: ";
    cin>>a;

    for(i=2; i<a; i++) {
        if(a%i==0) {
            cout << a << " is non-prime number";
            break;
        }
        
    }
    if(i==a) {
        cout << a << " is prime number";
    }

    // TO PRINT ALL PRIME NUMBERS IN RANGE A TO B 
    int p, q, i, n;
    cout << "Enter start of the range: ";
    cin >> p;
    cout << "Enter end of the range: ";
    cin >> q;

    for(n=p; n<=q; n++) {
        for(i=2; i<n; i++) {
            if(n%i==0) {
                break;
            }
        }
        if(i==n) {
            cout << n <<endl;
        }
    }

    return 0;

}