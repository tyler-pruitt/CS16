// Tyler Pruitt
// Collaborator: Kristin Cheung

AString::AString()
{
    StringValue = "";
}

AString::AString(string entry)
{
    StringValue = entry;
}

void AString::getAString()
{
    string temp;
    cout << "Enter string value: ";
    getline(cin, temp);
    StringValue = temp;
}

void AString::cleanUp()
{
    //remove all non-alphabetical characters from the string
    string str = StringValue;
    string temp = "";
    int length = str.size();

    for (int i = 0;i<length;i++)
    {
        int value = str[i];
        if ((value >= 97 && value <= 122) || (value >= 65 and value <=90))
        {
            str[i] = tolower(str[i]);
            temp += str[i];
        }
    }
    StringValue = temp;
}

void AString::countLetters(int a[])
{
    string str = StringValue;
    int strLen = str.length();
    int value;

    for (int i=0;i<strLen;i++)
    {
        value = str[i];
        if (value >= 97 && value <= 122)
        {
            a[value-97]++;
        }
    }
}

bool compareCounts(int a[], int b[])
{
    //assume true until proven false
    int length = 26;
    for (int i=0;i<length;i++)
    {
        if (a[i]!=b[i])
        {
            return true;
        }
    }
    
    return false;
}