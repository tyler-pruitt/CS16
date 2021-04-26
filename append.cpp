
#include <iostream>
#include <fstream> // this library lets us use stream variables
#include <cstdlib> // provides exit()
using namespace std;

/*
    File stream objects in functions
    - We can define functions that do I/O
    - But we _have to_ pass the stream variables _by reference_ into the function
*/
void doTheThing(ifstream &inStream, ofstream &outStream) {
    /* Formatting output to file
        - Recall format decimal precision for standard out
        - We can do the _same_ thing for our output streams
    */
    outStream.setf(ios::fixed);
    outStream.setf(ios::showpoint);
    outStream.precision(3);

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
        outStream << next << " ";
    }
    outStream << "\nAverage: " << sum / count << endl;
}

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

    outStream.open("outfile.dat", ios::app);
    if (outStream.fail()) {
        cerr << "Failed to open output file.\n";
        exit(1);
    }
    /*
        Appending data
        - If the output file that you want to write already contains data, we would be overwriting it!

        - To append new output to the end of an existing file, use the constant `ios::app` defined in the <fstream> library.
            - We do this when we _open_ the file
            - If the file does not exist a new file is created
            - `ios::app` is just another c++ constant that means "seek to the end before each write"
    */

    doTheThing(inStream, outStream);

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