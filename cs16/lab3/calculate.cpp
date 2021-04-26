// calculate.cpp
// By: Tyler Pruitt

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

// Usage: ./calculate int char int
// char can either be: + x or %
int main(int argc, char *argv[])
{
    // PART 1: Check to see if the number of arguments is correct
    //         Hint: use "if (argc ...)" to check this,
    //         use cerr to output any messages
    if (argc == 4)
    {
        int num1, num2;
        num1 = atoi(argv[1]);
        num2 = atoi(argv[3]);

        char operation;
        operation = argv[2][0];

        switch (operation)
        {
            case '+':
                cout << num1+num2 << endl;
                break;
            case 'x':
                cout << num1*num2 << endl;
                break;
            case '%':
                if (num2 != 0)
                {
                    cout << num1%num2 << endl;
                }
                else
                {
                    cerr << "Cannot divide by zero." << endl;
                }
                break;
            default:
                cerr << "Bad operation choice." << endl;
        }
    }
    else
    {
        cerr << "Number of arguments is incorrect." << endl;
    }
    // PART 2: Convert arguments into integers (only those that need it!)
    //         Hint: this means using atoi()

    // PART 3: Check for illegal operations like divide by zero...
    //         use cerr to output any messages

    // PART 4: Do the appropriate calculation,
    //         outputs using both cout and cerr

    return 0;
}