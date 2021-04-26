
#include <iostream>
using namespace std;

// call-by-value
void foo(int x) {
    x += 4;
    cout << "\tx in foo: " << x << endl;
}

// using '&' to distinguish a variable being called-by-reference
void bar(int &x) {
    x += 4;
    cout << "\tx in bar: " << x << endl;
}

int main() {
    int a = 5, b = 5;
    foo(a);
    bar(b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}