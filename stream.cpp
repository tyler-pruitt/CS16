


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
        cerr << "Failed to open input file.\n";
        exit(1);
    }

    outStream.open("outfile.dat");
    if (outStream.fail()) {
        cerr << "Failed to open output file.\n";
        exit(1);
    }

    // Using the input stream
    // Once connected to a file, get input from the file using the extraction operator `>>` (just like using cin)
    // Once connected to a file, write output to the file using the insertion operator `<<` (just like using cout)

    int foo, bar;
    inStream >> foo >> bar;
    outStream << "I read: " << foo << " and " << bar << endl;

    // Do it again!
    inStream >> foo >> bar;
    outStream << "I read: " << foo << " and " << bar << endl;
    // Write to outStream's file instead of cout

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