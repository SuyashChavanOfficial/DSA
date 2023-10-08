#include <iostream>
#include <string>
#include <algorithm> // used for functions like sort
using namespace std;

int main() {

    string s1 = "Fam";
    string s2 = "ily";

    // APPEND METHOD 1
    s1.append(s2);

    cout << s1 << endl;

    // APPEND METHOD 2 

    s1 = s1 + s2; 
    cout << s1 << endl;

    // ACCESSING CHARACTERS USING STRING

    cout << s1[2] << endl;

    // CLEARING THE STRING

    string s3 = "asfhasfb sadbfiasdf ib asfubasdf";
    s3.clear();

    cout << s3 << endl;

    // COMPARING STRINGS

    cout << s2.compare(s1) << endl;

    // EMPTY STRING - checks if sting is empty or not 

    s1.clear();

    if(s1.empty()) {
        cout << "String is empty" << endl;
    }

    // ERASE FUNCTION - deletes the characters in the string 

    string s4 = "nincompoop";

    s4.erase(3, 3); 
    // parameters: erase(start of the index, no. of characters to delete)
    cout << s4 << endl;
    
    // FINDING A SUBSTRING 

    cout << s4.find("com") << endl;
    // returns first index where com is present

    // INSERTION IN A STRING 

    s4.insert(0, "You are ");
    cout << s4 << endl;

    // SIZE AND LENGTH - returns length and size of the string

    s1.size();
    s1.length(); // useful for iterations

    // GETTING A SUBSTRING

    string s5 = s4.substr(6, 4);
    // parameters: substr(starting index of substring, required characters); 
    cout << s5 << endl;

    // STRING TO INTEGER 

    string s6 = "786";
    int x = stoi(s6); // string to integer

    cout << x+2 << endl;

    // INTEGER TO STRING 

    int x = 786;

    cout << to_string(x) + "2" << endl;

    // SORTING OF STRING 

    string s7 = "asfapfsdasbpfasbfaspdgfia";

    sort(s7.begin(), s7.end());

    cout << s7 << endl;
    
    return 0;
}