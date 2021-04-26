

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

double powerSum(int num1, int num2);
// Calculates the sum of two numbers raised to each other 

double powerSum(int num1, int num2) {
    double result;
    result = pow(num1, num2) + pow(num2, num1);
    return result;
    //return pow(num1, num2) + pow(num2, num1); // same thing
}

int main(int argc, char* argv[]) {
    /*
      Pseudo-random number generation (in C++)
      1. Seed the random number generator
      2. Generate random numbers
    */

    // Seed the random number generator
    srand(time(0));  // only need to do this once
    int r = rand();
    cout << r << endl;
    /*
        rand() generates a random integer number between 0 and RAND_MAX
        - how to generate a random number between some range?
            - using modulo (%) and addition
    */
    int die = (rand() % 6) + 1;
    cout << die << endl;
    //int n1 = atoi(argv[1]);  
    //int n2 = atoi(argv[2]);
    //cout << "power sum " << powerSum(n1, n2) << endl;

    return 0;
}
