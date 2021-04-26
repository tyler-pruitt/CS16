//Tyler Pruitt
//Collaborator: Kristin Cheung

// PLACE THE NECESSARY include, etc... STATEMENTS HERE
#include <iostream>
#include <string>
using namespace std;

// DECLARE THE FUNCTIONS HERE:
bool isPalindrome(string str);
void cleanUp(string &str);

int main() {
    string p;
    cout << "Enter sentence:\n";
    getline(cin, p);
    
    cleanUp(p);
    //cout << "clean up: " << p << endl;
    bool answer = isPalindrome(p);
   
    if (answer) {
        cout << "It is a palindrome.\n";
    } else {
        cout << "It is not a palindrome.\n";
    }

    return 0;
}

// DEFINE THE FUNCTIONS HERE:
void cleanUp(string &str)
{
    string cleanStr = "";
    int len = str.length();
    for (int i=0;i<len;i++)
    {
        if ((str[i]>=97 && str[i]<=122) || (str[i]>=65 && str[i]<=90))
        {
            cleanStr += tolower(str[i]);
        }
    }
    str = cleanStr;
}

bool isPalindrome(string str)
{
    //create a variable for the length
    int len = str.length();
    
    //the base case (an empty string is a palindrome)
    if (len == 0)
    {
        return true;
    }
    
    //the recursive case
    if (str[0] == str[len-1])
    {
        //create the next string which is the last string without the first and last characters
        string nextStr = "";
        for (int i=1;i<len-1;i++)
        {
            nextStr += str[i];
        }
        
        //cout << "next string: " << nextStr << endl;
        
        //make a recursive call to isPalindrome with the next string
        return isPalindrome(nextStr);
    }
    else //if the first is not equal to the last, it is not a palindrome
    {
        return false;
    }
}
