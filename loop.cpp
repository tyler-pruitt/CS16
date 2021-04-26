

#include <iostream>
#include <string>
using namespace std;

int main() {
    
/*
    int countDown = 3;
    while (countDown > 0) {
        cout << "Alright ";
        countDown--;
    }
*/

/*
    int flag = 1;
    do {
        cout << "Yo ";
        flag -= 1;
    } while (flag > 0);  // note the semicolon
*/

    /*
        For loop
        Similar to the while, but with extra parameters

        for (declare counter var; loop condition; modify counter var)
        {
            loop body;
        }

    for (int count = 2; count < 6; count++) {
        cout << "Apples ";
    }
    */

    // Cool trick with while loops and ++
    int max = 0;
    while (max++ < 4) {
        cout << "1+";
    }
    cout << endl << endl;
    /*
        1. start the while loop condition check
        2. grab the value in max (check max < 4),
        3. THEN increment max
    */
    max = 0;
    while (++max < 4) {
        cout << "1+";
    }
    /*
       ++max:
       1. increment the value in max;
       2. then USE it
    */
    cout << endl << endl;

    /*
    int foo = 1;
    while (foo > 0) {
        cout << foo << endl;
    }
        Infinite loops:
        Avoid: the loop body should contain some statement that will eventually case the loop condition to turn false.
    */

    /*
        Common use for `for` loops:
        Sums, accumulating results
    int sum = 0; // MUST INITIALIZE IT BEFORE THE LOOP
    for (int count = 0; count < 5; count++) {
        int num;
        cin >> num;
        sum += num;
    } 
    cout << "sum is " << sum << endl;
    */

    /*
        Loop advice:
        - A `for` loop is generally a good choice when there is a predetermined number of iterations
        - For cases when you don't, use a `while`
    */

    /* sentinel value
    int number;

    cout << "enter a non-negative integer and I'll double it!\n" 
         << "enter a negative integer to quit";
    cin >> number;
    while (number >= 0) {  // number is the "sentinel"
        cout << "Doubled! " << number * 2 << endl;
        cout << "enter a non-negative integer and I'll double it!\n" 
             << "enter a negative integer to quit";
        cin >> number;
    }
    */

    /*
        Ask before iterating
    char answer;
    cout << "Are you happy? (y/n) ";
    cin >> answer;

    while ((answer == 'n') || (answer == 'N')) {
        cout << "How about now? " ;
        cin >> answer;
    }
    */

    /*
        Nested loops:
        - The body of a loop can contain any kind of C++ statement; including loops.
        - When loops are nested, __all iterations of the inner loop execute for each iteration of the outer loop__.

        Example:
        - we want to collect students grades
        - students have multiple assignments (quiz, hw)
        - we want to output the class average
        - we'll go through each student, one at a time, and collect their scores
    */
    int students = 2;
    double grade(0), subtotal(0), grandTotal(0);

    for (int count = 0; count < students; count++) {
        cout << "student number: " << count << endl
             << "Enter grades (to finish, enter a negative number)\n";
        cin >> grade;
        while (grade >= 0) {
            subtotal += grade;
            cin >> grade;
        }
        cout << "total grade for student " << count << " is " 
             << subtotal << endl;
        grandTotal += subtotal;
        subtotal = 0;
    }

    cout << "Class average " << grandTotal/students << endl;

    return 0; 
}

