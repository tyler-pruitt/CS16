


#include <iostream>
#include <string> // standard string library
/*
    The string class allows us to treat strings like a basic data type. 
        - The "legacy" alternative is to treat strings as arrays of characters (from the C language), `char message[6]`, c-strings. 
    Comes with useful functions like length(), substr(), find(), replace()
 */
 #include <cctype> // For character functions

using namespace std;

int main() {

    // Delcaring a string in C++
    string foo = "Home"; 
    // Since strings are made of characters, we can index individual characters
    char foo1 = foo[0];
    cout << "1st character of foo: " << foo1 << endl;
    char foo3 = foo[2];
    cout << "3rd character of foo: " << foo3 << endl;

    // Use the + operator to _concatenate_ strings
    string bar = "star";
    cout << "Concatentate foo and bar: " << foo + bar << endl;
    // Use the += to append to a string (i.e. add to the end)
    string who = "Coach ";
    who += "Z!";
    cout << "Appending strings: " << who << endl;

    // Conversions
    // 1. String to number: stoi() for integer; stod() for floating point
    string year = "1999";
    int n = stoi(year);
    n++;
    cout << "String to int: " << n << endl;
    cout << stoi("-20XX") << endl;  // what happens here?
    cout << stoi("20 19") << endl;  // what happens here?
    //cout << stoi("XX20") << endl;  // runtime error!
    //cout << stoi("foo bar") << endl; // runtime error!

    // 2. Numbers to strings: to_string()
    int number = 42;
    string answer = to_string(number);
    cout << "Int to string: " << answer << endl;

    // Character functions: operate on individual characters
    // Found in <cctype> library

    // Character manipulators: tolower(), toupper()
    foo[0] = tolower(foo[0]);
    cout << "tolower: " << foo[0] << endl;
    cout << "toupper: " << toupper(foo[1]) << endl;
    cout << "tolower: " << tolower(foo[2]) << endl;
    // Note: these operate on _single_ characters!
    // How can we use this on an entire string? 

    // Character inspectors: 
    // isspace() -- boolean function returns true if the argument is whitespace (space, tab, newline)
    cout << "isspace: " << who << "[5]: " << isspace(who[5]) << endl;
    // isupper(), islower() -- checks if upper/lowercase letter
    cout << "isupper: " << who << "[0]: " << isupper(who[0]) << endl;
    cout << "islower: " << who << "[1]: " << islower(who[1]) << endl;
    // isdigit() -- checks if 0--9
    cout << "isdigit: " << who << "[1]: " << isdigit(who[1]) << endl;

    // Search functions
    // find() will search for the _first_ occurrence of a string inside another string

    cout << "\nfind() demo:" << endl;
    string question = "How now brown cow?";
    // Find the first occurrence
    int first = question.find("ow");
    cout << "first ow: " << first << endl;
    // Finds the first occurrence starting at position `4`
    int next = question.find("ow", 4);
    cout << "next ow: " << next << endl;

    // You can use find to check if a substring is _not_ in the target string
    // string::npos is the "no position"; is returned if no position exists
    if (question.find("banana") == string::npos) {
        cout << "Yes, we have no banana\n";
    }

    // rfind() will search for the _last_ occurrence of a string
    int last = question.rfind("ow");
    cout << "last ow: " << last << endl;

    // length() returns the length of the string
    // useful for looping over a string
    cout << "\nString length demo:\n";
    string name = "Homestar Runner";
    for (int i = name.length(); i > 0; i--) {
        cout << name[i-1];
    }
    cout << endl << endl;

    // String manipulators:
    // replace(start position, # of places to replace, replacement string)
    // insert(start position, insertion string)
    // substr(start position, # of places after start)
    string country = "Back in the USSR";
    cout << country.replace(14, 2, "A") << endl;
    cout << country.insert(4, "!!") << endl;
    cout << country.substr(1,4) << endl;
    cout << "final string: " << country << endl;

    return 0;
}
