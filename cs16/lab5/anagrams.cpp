#include <iostream>
#include <string>
#include <cctype>
using namespace std;

void clean_string(string &str, int &length);
void sort_string(string &str, int &length);
void get_freq(string str, int &length, int letters[], int counts[]);
bool compare_freq(int first_letters[], int second_letters[], int first_counts[], int second_counts[], int first_length, int second_length);

int main()
{
	// Get strings from user
	string sentence1, sentence2;
    cout << "Enter first string:" << endl;
    getline(cin, sentence1);
    cout << "Enter second string:" << endl;
    getline(cin, sentence2);

	// If strings are the same, they are certainly anagrams
	if (sentence1 == sentence2)
	{
		cout << "The strings are anagrams." << endl;
	}
	else
	{
		int sentence1Size = sentence1.size(), sentence2Size = sentence2.size();
		// Clean strings
		clean_string(sentence1, sentence1Size);
		clean_string(sentence2, sentence2Size);

		// Sort strings
		sort_string(sentence1, sentence1Size);
		sort_string(sentence2, sentence2Size);

		// Check to see if they are anagrams
		int letters1[sentence1Size], counts1[sentence1Size], letters2[sentence2Size], counts2[sentence2Size];
		get_freq(sentence1, sentence1Size, letters1, counts1);
		get_freq(sentence2, sentence2Size, letters2, counts2);

		// Report if they are or not anagrams
		bool isAnagram = compare_freq(letters1, letters2, counts1, counts2, sentence1Size, sentence2Size);

		if (isAnagram == true)
		{
			cout << "The strings are anagrams." << endl;
		}
		else
		{
			cout << "The strings are not anagrams." << endl;
		}
	}

    return 0;
}

void clean_string(string &str, int &length)
{
    //remove all non-alphabetical characters from the string
    string temp = "";
    for (int i = 0;i<length;i++)
    {
        int value = str[i];
        if ((value >= 97 && value <= 122) || (value >= 65 and value <=90))
        {
            str[i] = tolower(str[i]);
            temp += str[i];
        }
    }
    str = temp;
	length = str.size();
}

void sort_string(string &str, int &length)
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
	length = str.size();
}

void get_freq(string str, int &length, int letters[], int counts[])
{
    if (length!=0)
    {
        //cout << "\t" << "sorted string: " << str << endl;

        //get letters and their counts
        for (int i=0;i<length;i++)
        {
            counts[i] = 0;
        }

        letters[0] = str[0];
        int index = 0;

        for (int i=0;i<length;i++)
        {
            if (letters[index] != str[i])
            {
                index++;
                letters[index] = str[i];
            }
            counts[index]+=1;
        }

		
        //adjust the length of the sentence so it only counts the number of distinct letters
		int size = 0;
        for (int i=0;i<length;i++)
        {
            if (counts[i] != 0 && letters[i] != 0)
            {
                //print letters and their counts for debugging
				//char letter = letters[i];
				//cout << "\t" << letter << ": " << counts[i] << endl;
				size++;
            }
            else
            {
                break;
            }
        }
		length = size;
    }
}

bool compare_freq(int first_letters[], int second_letters[], int first_counts[], int second_counts[], int first_length, int second_length)
{
	//compare letters and their respective counts
	
	//assume true until proven false

	//compare letters to assure that both of the sentences have different letters the same set of distinct letters
	for (int i=0;i<first_length;i++)
	{
		bool sameLetters = false;
		for (int j=0;j<second_length;j++)
		{
			//check if condition is satisfied: just needs to find a counterpart in the other sentence once
			if (first_letters[i] == second_letters[j])
			{
				sameLetters = true;
			}
		}

		if (sameLetters == false)
		{
			return false;
		}
	}

	//compare count of letters to assure that both can be reconstructed from the other
	for (int i=0;i<first_length;i++)
	{
		for (int j=0;j<second_length;j++)
		{
			//if the same letter
			if (first_letters[i] == second_letters[j])
			{
				//if the counts are different
				if (first_counts[i] != second_counts[i])
				{
					return false;
				}
			}
		}
	}

	return true;
}