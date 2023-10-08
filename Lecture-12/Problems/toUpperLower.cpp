
// Convert all characters of string to upper case or to lower case 

#include <iostream>
#include <string>
using namespace std;

int main() {

    // A is 32 ahead a 

    // FOR UPPER CASE 
    string l = "aasfasbdfabsfdpaisfd";

    for(int i=0; i<l.size(); i++) {
        if(l[i]>='a' && l[i]<='z') {
            l[i] -= 32;
        }
    }
    cout << l << endl;

    // FOR LOWER CASE 

    string u = "AFASDFBASDBFPASDFPAIF";

    for(int i=0; i<u.size(); i++) {
        if(u[i]>='A' && u[i]<='Z') {
            u[i] += 32;
        }
    }
    cout << u << endl;

    // INBUILT FUNCTIONS TO DO THE SAME JOB 

    // To upper  
    transform(l.begin(), l.end(), l.begin(), :: toupper);
    // parameters: transform(starting point of our string, ending point of our string, from where to begin the transformation, ::toupper);
    cout << l << endl;

    // To lower 
    transform(u.begin(), u.end(), u.begin(), ::tolower);
    cout << u << endl;
    
    return 0;
}