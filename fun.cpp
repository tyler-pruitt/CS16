#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

// DECLARATIONS

double powerSum(int num1, int num2);
// Calculates the sum of two numbers raised to each other 

void triplePrint(double number);

// DEFINITIONS

double powerSum(int num1, int num2) {
    double result;
    result = pow(num1, num2) + pow(num2, num1);
    return result;
    //return pow(num1, num2) + pow(num2, num1); // same thing
}

void triplePrint(double number) {
    if (number == 0) {
        return;
    }
    cout << number << " x3 = " << number *3 << endl;
}

int main(int argc, char* argv[]) {
    // argv is always a char type
    // first convert the arguments
    int n1 = atoi(argv[1]);  // '14' --> 14
    int n2 = atoi(argv[2]);

    cout << "power sum " << powerSum(n1, n2) << endl;

    triplePrint(2.11415);
    triplePrint(0.0);

    return 0;
}
