


#include <iostream>
using namespace std;

/*
    calculate a product equal to the numbers 2--5
    2x3x4x5 = 120
*/

int main() {
    int next = 2, product = 1;

    while (next <= 5) {
        product *= next;
        next++;
        cout << "\tproduct " << product << endl;
        cout << "\tnext " << next << endl;
    }

    cout << "product = " << product << endl;
    return 0;
}