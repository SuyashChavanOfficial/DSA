#include <iostream>
#include <cmath>
using namespace std;

// FIND IF NUMBER IS PRIME OR NOT 
bool isPrime(int num) {
    for (int j=2; j<=sqrt(num); j++) {
        if(num%j==0) {
            return false;
            // if return false condition is hit, we are automatically out of the function. So, there is no need to write break;
        } 
    }
    return true;
}

int main() {

    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    for(int i=num1; i<=num2; i++) {
        if (isPrime(i) == true) {
            cout << i <<  endl;
        }
    }
    return 0;
}