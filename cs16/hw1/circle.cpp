#include <iostream>
using namespace std;
const double pi = 3.14;
int main() {
    // declare the variables here
    double diameter, area, circumference;
    cin >> diameter;
    // calculate the results here
    area = pi*(diameter/2)*(diameter/2);
    circumference = 2*pi*(diameter/2);
    // print statements here
    cout << "The area of this circle is: " << area << endl;
    cout << "The circumference of this circle is: " << circumference << endl;
    // end program
return 0; }