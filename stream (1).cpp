


#include <iostream>
#include <fstream> // this library lets us use stream variables
#include <cstdlib> // provides exit()

using namespace std;

int main() {

    // Declare an input-file stream variable
    ifstream inStream;

    // Declare an output-file stream variable
    ofstream outStream;

    // Connect to a file
    // Means "opening" the file
    // Use the member function called .open()
    inStream.open("infile.dat");
    if (inStream.fail()) {
        /*
          Errors on opening files
          - it might exist
          - incorrect file path
          - wrong permissions

          fail() --- tests the success of a stream operation
            - returns True if the stream operation _failed_
        */
        cerr << "Failed to open input file.\n";
        exit(1);  // from <cstdlib>
        /*
            Halts the program, and returns the integer argument to the OS
        */
    }

    outStream.open("outfile.dat");
    if (outStream.fail()) {
        cerr << "Failed to open output file.\n";
        exit(1);
    }

    // Using the input stream
    // Once connected to a file, get input from the file using the extraction operator `>>` (just like using cin)
    // Once connected to a file, write output to the file using the insertion operator `<<` (just like using cout)

    /*
        Detecting the end of a file:
        - Files may vary in length
        - Programs may not be able to correctly assume the number of lines/items in the file 
        1. Using the >> oeprator
        2. <fstream> member function .eof()

        Which should we use?
        - Use `.eof()` when input is treated as text/strings/characters while using .get() to read the input
        - Use the extraction operatior (>>) when input is numerical data
    */

    /* Method 1
    double next, sum(0);
    int count = 0;

    while (inStream >> next) {
        // The loop condition does 2 things:
        // 1. Reads a value from the inStream object, and stores it in the variable next
        // 2. Then, returns a boolean value
        // (True if a value _can_ be read and stored in `next`
        // (False if there is not a value to be read (i.e. end of file)
        sum += next;
        count++;
    }
    cout << "Average: " << sum / count << endl;
    */

    /* Method 2 .eof() 
    char c;
    inStream.get(c);
    while (!inStream.eof()) {
        cout << c << "-";
        inStream.get(c);
    }
    cout << "\nDone!\n";
    */

    /*
        Member function .get()
        - This is a function of every stream variable (for cin or any stream object)
        - Reads _one_ character at a time
        - Stores that character in a variable of type `char` (passed in as argument)
        - Does not use the >> operator
        - Does _not_ skip whitespaces
    */


    // Close the file!
    /*
        - Closing _disconnects_ the stream from the file
        - Reduces the chance of a file being corrupted if the program terminates abnormally
        - It's important to close an output file. Especially if later on your program needs to read input from that same file.
        - The system will automatically close the files if you forget, _as long as your program ends normally_ (with runtime errors) 
    */
    inStream.close();
    outStream.close();

    return 0;
}