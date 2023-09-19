#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int num;

    cout << "Enter number to check: ";
    cin >> num;

    int armnum = 0;
    int originalnum = num;

    while(num>0) {
        int lastdigit = num%10;
        armnum += pow(lastdigit,3);
        num=num/10;
    }

    if(armnum == originalnum) {
        cout << "It is armstrong number"; 
    } else {
        cout << "It is not Armstrong number.";
    }

    return 0;
}