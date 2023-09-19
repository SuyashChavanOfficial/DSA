#include <iostream>
using namespace std;

int main() {

    int num, lastdigit;

    cout << "Enter num to reverse: ";
    cin >> num;

    int reverse = 0;
    
    while(num>0) {
        lastdigit = num%10;
        reverse = reverse*10+lastdigit;
        num=num/10;
    }
    cout << "Reversed num is: " << reverse << endl;

    return 0;
}