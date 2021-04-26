


#include <iostream>
#include <cmath>
using namespace std;

double WeirdCalc(double x, double y);

int main() {
    double n, m ,w;
    cout << "Enter 2 values for a weiiird calculation: ";
    cin >> n >> m;
    w = WeirdCalc(n, m) / (37 - pow(n/m, m/n));
    cout << "Answer: " << w << endl;
    return 0;
}

// Make a stub! Just for testing
double WeirdCalc(double x, double y) {
    return 7;
}