#include <iostream>
using namespace std;

int main() {

    int n;

    cin >> n;
    cin.ignore(); 

    char a[n+1];
    cin.ignore();
    cin.getline(a, n);  
    // It stores the character in single line and 
    // else the words are stored in seperate variables

    int i=0;
    int currLen = 0, maxLen = 0;
    int st = 0, maxst = 0;

    while(1) {

        if(a[i] == ' ' || a[i] == '\0') {
            if(currLen > maxLen) {
                maxLen = currLen;
                maxst = st;
            }
            currLen = 0;
            st = i+1;
        } else 
            currLen++;

            if(a[i] == '\0') {
                break;
            }
        
            i++;
        
    }

    cout << maxLen << endl;

    for(int i=0; i<maxLen; i++) {
        cout << a[i+maxst]; 
    }

    return 0;
}