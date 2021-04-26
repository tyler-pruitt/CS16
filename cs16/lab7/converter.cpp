#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string convertFromDec(unsigned int decnum, unsigned int base)
{
    string ans = "";
    int quotient, remainder;
    string digit;

    do
    {
        quotient = decnum / base;
        remainder = decnum % base;
        digit = to_string(remainder);
        if (base == 16 && (remainder >= 10 && remainder <= 15))
        {
            switch (remainder)
            {
                case 10 :
                    digit = "A";
                    break;
                case 11 :
                    digit = "B";
                    break;
                case 12 :
                    digit = "C";
                    break;
                case 13 :
                    digit = "D";
                    break;
                case 14 :
                    digit = "E";
                    break;
                case 15 :
                    digit = "F";
                    break;
            }
        }
        ans.insert(0, digit);
        decnum = quotient;
    } while (quotient != 0);

    return ans;
}

int main()
{
    while (true)
    {
        string input;
        cout << "Enter positive decimal number (anything else quits): ";
        cin >> input;
        
        if ((input[0]=='0' && input.length()==1) || input[0]=='-')
        {
            return 0;
        }

        int num = stoi(input);
        if (num > pow(2, 31)-1)
        {
            return 0;
        }

        string bin, oct, hex;
        bin = convertFromDec(num, 2);
        oct = convertFromDec(num, 8);
        hex = convertFromDec(num, 16);

        cout << input << " in binary is: " << bin << endl;
        cout << input << " in octal is: " << oct << endl;
        cout << input << " in hex is: " << hex << endl;
        cout << "" << endl;
    }

    return 0;
}