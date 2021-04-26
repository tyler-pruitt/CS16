#include <iostream>
#include <string>
#include <fstream>
using namespace std;

string lastWord(string line)
{
    string word;
    word = line.substr(line.rfind(" ")+1, line.length());
    return word;
}

string cleanUpWord(string word)
{
    string cleanWord = "";
    for (int i=0;i<word.length();i++)
    {
        if ( (word[i]>='A' && word[i]<='Z') || (word[i]>='a' && word[i]<='z') )
        {
            cleanWord+=word[i];
        }
    }
    return cleanWord;
}

bool wordsRhyme(string word1, string word2)
{
    //assume true until proven false
    int len1 = word1.length(), len2 = word2.length();
    if (word1[len1-1]==word2[len2-1] && word1[len1-2]==word2[len2-2])
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    string filename;

    cout << "Enter filename: ";
    getline(cin, filename);

    ifstream inStream;

    inStream.open(filename);
    if (inStream.fail()) {
        cerr << "Input file opening failed.\n";
        exit(1);
    }

    const int size = 200; //Maximum number of lines in the poem to be read from
    string lines[size];
    bool isLastLine = false;
    int rhymeCount=0, numLines=0;

    while(!isLastLine)
    {
        getline(inStream, lines[numLines]);
        numLines++;
        if (inStream.eof())
        {
            isLastLine = true;
        }
    }

    inStream.close();

    string lastWords[numLines], temp;
    for (int i=0;i<numLines;i++)
    {
        temp=lastWord(lines[i]);
        lastWords[i]=cleanUpWord(temp);
    }

    for (int i=1;i<numLines;i++)
    {
        if (wordsRhyme(lastWords[i-1], lastWords[i]))
        {
            rhymeCount++;
            cout << lastWords[i-1] << " and " << lastWords[i] << endl;
        }
    }

    if (rhymeCount==0)
    {
        cout << "No rhymes found." << endl;
    }
    else if (rhymeCount==1)
    {
        cout << "There is 1 pair of rhyming words." << endl;
    }
    else
    {
        cout << "There are " << rhymeCount << " pairs of rhyming words." << endl;
    }


    numLines--; //Assuming text files end on a line with no text.

    if (rhymeCount==0)
    {
        cout << "There are " << numLines << " lines in this poem." << endl;
    }
    else
    {
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2);
        
        double rhymeLineDensity = double(rhymeCount)/numLines;
        cout << "There are " << numLines << " lines in this poem, so the rhyme-line density is: " << rhymeLineDensity << endl;
    }

    return 0;
}