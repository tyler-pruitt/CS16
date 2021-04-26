

#include <iostream>
using namespace std;

int main() {    
    char c1, c2, c3;

    cin.get(c1);
    cin.get(c2);
    cin.get(c3);

    cout << "c1 " << c1 << endl
         << "c2 " << c2 << endl
         << "c3 " << c3 << endl;
    
    cin >> c1 >> c2 >> c3;

    cout << "\nc1 " << c1 << endl
         << "c2 " << c2 << endl
         << "c3 " << c3 << endl;
    
    // Input:
    // AB\n
    // CD
    return 0;
}