



#include <iostream>
#include <cmath>
using namespace std;

// passing an array into a function
/*
    - the array parameter is indicated by []
    - it's usually necessary to pass the array AND its size
    - we can think of a[] as a variable that contains the "memory address" of the start of the array (location of a[0])
    - an array parameter behaves similarly to a call-by-reference parameter
 */
void fillUp(int a[], int size) {
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) {
        cin >> a[i]; 
    }
}

// Constant array parameter 
void fillUpConst(const int a[], int size) {
    //cout << "Enter " << size << " numbers:\n";
    /*for (int i = 0; i < size; i++) {
        cin >> a[i];  // WON'T COMPILE!
    }*/
    cout << "in fillUpConst\n";
    for (int i = 0; i < size; i++) {
        cout << a[i] << endl;
    }
}

int main() {

    const int PRIMES = 5;
    int primes[PRIMES] = {2,3,5,7,11};

    // ranged-based for loop
    /*
    for (int p : primes) {  // declare p local to the loop
        cout << p << endl;
    }
    */
    for (int i = 0; i < PRIMES; i++) {
        cout << primes[i] << endl; 
        //cout << pow(2, primes[i]) << endl; // 2 ^ primes[i]
    }

    fillUp(primes, PRIMES);
    //fillUpConst(primes, PRIMES);

    for (int p : primes) {
        cout << p << endl;
    }

    return 0;

}