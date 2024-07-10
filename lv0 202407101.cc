#2 Problem Description
Numbers in English are considered strings. Write code that logs each log, 
    converts it to a large format, and prints it.
// question key point small to large and large to small

Restrictions
1 ≤ length of str ≤ 20
str is a keyboard string.

input value #1
aBcDeFg

output value #1
AbCdEfG


/***********************************************
solution on down
*******************************************/


#include <iostream>#defalut module 
#include <string> #defalut module
#include <cctype> #user add module


/*********************************
int main(void) {
    string str;
    int n;
    
    cin >> str >> n;
    
    for (int i = 0; i< n; ++i ) {
        cout << str;
    }
    cout << endl;
    return 0 ;
}
************************************/

//diffrent from before code

using namespace std;

int main() {
    string str ;
    cin >> str;
    
    for (char& c : str) {
        if (isupper(c)) {
            c = tolower(c);
        } else if (islower(c)) {
            c = toupper(c);
        }
    }
    
    //#endl >> str >> cout; not correct
    // ?= # 
    cout << str << endl;
    
    return 0;
}
