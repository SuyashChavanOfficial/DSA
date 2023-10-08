
// Form the biggest number from the given string

#include <iostream>
#include <string>
using namespace std;

int main() {

    string num = "435657";

    sort(num.begin(), num.end(), greater<int>());
    // greater<int>() is used to sort in decreasing order

    cout << num << endl;

    return 0;
}