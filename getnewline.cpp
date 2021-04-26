

#include <iostream>
using namespace std;

int main() {
    cout << "enter a line of input to echo\n";
    char symbol;
    do {
        cin.get(symbol);
        cout << symbol;
    } while (symbol != '\n');
    // all characters excluding \n will be output

    return 0;
}