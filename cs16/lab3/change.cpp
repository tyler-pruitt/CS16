#include <iostream>
#include <string>
using namespace std;

void compute_coins(int amount)
{
    // Precondition: 0 < amount < 100
    // Precondition: The function prints out the number of quarters
    if (amount > 0 && amount < 100)
    {
        // calculate amount of coins
        int quarters, dimes, pennies;
        quarters = amount / 25;
        dimes = (amount - quarters*25) / 10;
        pennies = amount - quarters*25 - dimes*10;

        // assign strings to each coin based on plurality and value
        string strCents, strQuarters, strDimes, strPennies;

        if (amount > 1)
        {
            strCents = " cents";
        }
        else
        {
            strCents = " cent";
        }

        if (quarters > 1)
        {
            strQuarters = " quarters";
        }
        else if (quarters == 1)
        {
            strQuarters = " quarter";
        }

        if (dimes > 1)
        {
            strDimes = " dimes";
        }
        else if (dimes == 1)
        {
            strDimes = " dime";
        }

        if (pennies > 1)
        {
            strPennies = " pennies";
        }
        else if (pennies == 1)
        {
            strPennies = " penny";
        }

        // change strings of coins based on values of other coins
        if (pennies == 0)
        {
            if (dimes == 0)
            {
                strQuarters+=".";
            }
            else
            {
                strDimes+=".";
                if (quarters != 0)
                {
                    strQuarters+=", ";
                }
            }
        }
        else
        {
            // pennies != 0
            if (quarters != 0)
            {
                strQuarters+=", ";
            }
            if (dimes != 0)
            {
                strDimes+=", ";
            }
            strPennies+=".";
        }

        // print out message to screen
        if (quarters!=0 && dimes!=0 && pennies!=0)
        {
            cout << amount << strCents << " can be given in " << quarters << strQuarters << dimes << strDimes << pennies << strPennies << endl;
        }
        else if (quarters==0 && dimes!=0 && pennies!=0)
        {
            cout << amount << strCents << " can be given in " << dimes << strDimes << pennies << strPennies << endl;
        }
        else if (quarters!=0 && dimes==0 && pennies!=0)
        {
            cout << amount << strCents << " can be given in " << quarters << strQuarters << pennies << strPennies << endl;
        }
        else if (quarters!=0 && dimes!=0 && pennies==0)
        {
            cout << amount << strCents << " can be given in " << quarters << strQuarters << dimes << strDimes << endl;
        }
        else if (quarters==0 && dimes==0 && pennies!=0)
        {
            cout << amount << strCents << " can be given in " << pennies << strPennies << endl;
        }
        else if (quarters!=0 && dimes==0 && pennies==0)
        {
            cout << amount << strCents << " can be given in " << quarters << strQuarters << endl;
        }
        else if (quarters==0 && dimes!=0 && pennies==0)
        {
            cout << amount << strCents << " can be given in " << dimes << strDimes << endl;
        }

    }
    else
    {
        // print out error message
        cout << "Amount is out of bounds. Must be between 1 and 99." << endl;
    }
}

int main()
{
    int num;
    cout << "Enter number of cents (or zero to quit):" << endl;
    cin >> num;

    while (num != 0)
    {
        compute_coins(num);
        cout << "Enter number of cents (or zero to quit):" << endl;
        cin >> num;
    }
    
    return 0;
}