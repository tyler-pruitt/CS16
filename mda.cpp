



#include <iostream>
using namespace std;

int main() {
    const int STUDENTS = 5;
    const int EXAMS = 3;
    // initialize the MDA
    int grades[STUDENTS][EXAMS] = {{99,100,80}, {60,71,89}};
    //int grades[STUDENTS][EXAMS];
    //grades[2] = {99,100,90}; 
    grades[3][0] = 80;
    grades[3][1] = 82;
    grades[3][2] = 88;

    for (int student = 0; student < STUDENTS; student++) {
        cout << "Grades for student " <<  student << endl;
        for (int exam = 0; exam < EXAMS; exam++) {
            cout << "\tExam " << exam << ": ";
                 //<< grades[student][exam] << endl;
            cin >> grades[student][exam];
        }
    }

    return 0;
}