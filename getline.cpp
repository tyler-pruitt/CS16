

#include <iostream>
#include <string>
using namespace std;

int main() {

    /*
    Difference between .get() and getline()
    - getline() lets us input streams with _whitespaces_
        - __Unlike__ cin, which separates input by whitespaces
    - getline() is _not_ a member function. It's provided by the <string> library. It takes as argument the input stream variable.
    */

    char in_char;
    cin.get(in_char);
    cout << "got " << in_char << endl;

    string in_string;
    getline(cin, in_string);
    cout << "gotline " << in_string << endl;

    return 0;
}