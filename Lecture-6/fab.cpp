#include <iostream>
#include <cmath>
using namespace std;

void fab(int n) {
    
    int t1=0, t2=1, nextTerm;

    for (int i=1; i<=n; i++) {
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}

int main() {
    
    int n;

    cout << "Enter num to find fabonacci series: ";
    cin >> n;

    fab(n);
}