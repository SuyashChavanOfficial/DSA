#include <iostream>
#include <string>
using namespace std;

int binToDec(int n) {

    int sum = 0, x=1;

    while(n>0) {
        int y = n%10;
        sum += x*y;
        x *= 2;
        n /= 10;
    }

    return sum;
}

int octToDec(int n) {

    int sum = 0, x=1;

    while(n>0) {
        int y = n%10;
        sum += x*y;
        x *= 8;
        n /= 10;
    }

    return sum;
}

int hexaToDec(string m) {

    int sum = 0, x=1;

    int s = m.size();
    
    for(int i = s-1; i>=0; i--) {

        if(m[i]>='0' &&  m[i]<='9') {
            sum += x*(m[i]-'0');
        } else if (m[i] >= 'A' && m[i] <= 'F') {
            sum += x*(m[i]-'A' + 10);
        }
        x*=16;
    }

    return sum;
}

int decToBin(int n) {
    
    int binary = 0; // Initialize binary as an integer
    int base = 1; // Initialize the base (2^0)
    
    while (n > 0) {
        int remainder = n % 2; // Calculate the remainder when dividing by 2
        binary += remainder * base; // Add the remainder to the binary representation
        n /= 2; // Divide n by 2 to move to the next bit
        base *= 10; // Increase the base to the next power of 10 (i.e., 2^1, 2^2, ...)
    }

    return binary; // Return the binary representation as an integer

}

int decToOct(int n) {

    int oct = 0, base = 1;

    while(n>0) {
        int rem = n % 8;
        oct += rem * base;
        n /= 8;
        base *= 10; 
    }

    return oct;
}

string decToHexa(int n) {

    string hex = "";

    while(n>0) {
        int rem = n%16;
        char hexDigit;

        if(hexDigit>=0 && hexDigit <=9) {
            hexDigit = '0' + rem;
        } else {
            hexDigit = 'A' + (rem - 10);
        }

        hex = hexDigit + hex;
        n /= 16;
    }
    return hex;
}

int main() {

    int n, ch;
    string m;

    cout << "Conversion:\n 1. Binary to Decimal\n 2. Octal to Decimal\n 3. Hexadecimal to Decimal\n 4. Decimal to Binary\n 5. Decimal to Octal\n 6. Decimal to Hexadecimal\n";
    cin >> ch;
    
    switch (ch)
    {
    case 1:
        cout << "Enter no. to convert: ";
        cin >> n;   
        cout << binToDec(n) << endl;
        break;
    
    case 2:
        cout << "Enter no. to convert: ";
        cin >> n;
        cout << octToDec(n) << endl;
        break;
    
    case 3:
        cout << "Enter no. to convert: ";
        cin >> m;
        cout << hexaToDec(m) << endl;
        break;

    case 4:
        cout << "Enter no. to convert: ";
        cin >> n;
        cout << decToBin(n) << endl;
        break;
    
    case 5:
        cout << "Enter no. to convert: ";
        cin >> n;
        cout << decToOct(n) << endl;
        break;
    
    case 6:
        cout << "Enter no. to convert: ";
        cin >> n;
        cout << decToHexa(n) << endl;
        break;
    
    default:
    cout << "Invalid Input!";
        break;
    }

    return 0;
}