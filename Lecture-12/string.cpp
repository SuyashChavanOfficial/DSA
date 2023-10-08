#include <iostream>
#include <string> //    included to use string functions
using namespace std;

int main() {

    // DECLARING STRINGS

    // Method 1
    string str;

    cin >> str;
    cout << str << endl;

    // Method 2: Specifying size of the string and the character
    string str1(5, 'n');

    cout << str1 << endl;

    // Method 3:

    string str2 = "SuyashChavan";
    cout << str2 << endl;

    // Method 4:

    string str4;
    getline(cin, str4);

    cout << str4 << endl;

    return 0;
} 