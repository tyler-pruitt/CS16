// Tyler Pruitt

// DEFINE STRUCTURE HERE -- MISSING!
struct record
{
    double firstYear;
    double secondYear;
    double thirdYear;
    double fourthYear;
};

struct UndergradStudents
{
    int id;
    string firstName;
    string lastName;
    string major;
    record gpa;
};

// DECLARE FUNCTIONS HERE.
// I've already declared 2 functions for you (DO NOT CHANGE THESE!)
void InitializeStructures(UndergradStudents us[], int &size);
void WriteResults(ofstream &outf, UndergradStudents us[], int size);

// You may add other function declarations in here as well, if you want to.
void SortResultsBubble(UndergradStudents us[], int size);
void newLine();
// See hint in the lab description document.
