#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void clean_string(string &str, int length);
void sort_string(string &str, int length);
void print_freq(string str, int length);

int main()
{
    string sentence;
    cout << "Enter sentence: ";
    getline(cin, sentence);
    clean_string(sentence, sentence.size());
    sort_string(sentence, sentence.size());
    print_freq(sentence, sentence.size());

	return 0;
}

void clean_string(string &str, int length)
{
    //remove all non-alphabetical characters from the string
    string temp = "";
    for (int i = 0;i<length;i++)
    {
        int value = str[i];
        if ((value >= 97 && value <= 122) || (value >= 65 and value <=90))
        {
            temp += str[i];
        }
    }
    str = temp;
}

void sort_string(string &str, int length)
{
    //do Bubble Sort algorithm
    for (int i=length-1;i>0;i--)
    {
        for (int j=0;j<i;j++)
        {
            if (str[j]>str[j+1])
            {
                //swap the numbers
                char temp = str[j+1];
                str[j+1] = str[j];
                str[j] = temp;
            }
        }
    }
}

void print_freq(string str, int length)
{
    //print frequency
    cout << "Sorted and cleaned-up sentence:";
    if (length!=0)
    {
        cout << str << endl;

        //get letter counts and labels
        int counts[length];
        int labels[length];

        for (int i=0;i<length;i++)
        {
            counts[i] = 0;
        }

        labels[0] = str[0];
        int index = 0;

        for (int i=0;i<length;i++)
        {
            if (labels[index] != str[i])
            {
                index++;
                labels[index] = str[i];
            }
            counts[index]+=1;
        }

        //print letter counts with labels
        for (int i=0;i<length;i++)
        {
            if (counts[i] != 0 && labels[i] != 0)
            {
                char label = labels[i];
                cout << label << ": " << counts[i] << endl;
            }
            else
            {
                break;
            }
        }
    }
}