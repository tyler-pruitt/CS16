#include <iostream>
#include <string>
using namespace std;

int main() {

    int a = 5, b = 6, c = 7;

    bool result = ((a >= b) || (c - b < a)) && !(a + b < c);
    /*                 F     OR     T           NOT  F
                              T             AND      T
                                            T
    */

    cout << "Result: " << result << endl;
    
    return 0; 
}