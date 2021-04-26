// Tyler Pruitt
// Collaborator: Kristin Cheung

#include <iostream>
#include <string>
using namespace std;

#include "headers.h"
#include "functions.cpp"

int main()
{
    AString sentence1, sentence2("nothing");
    int ca1[26] = {0}, ca2[26]={0};

    sentence1.getAString();
    sentence2.getAString();

    sentence1.cleanUp();
    sentence2.cleanUp();

    sentence1.countLetters(ca1);
    sentence2.countLetters(ca2);

    bool badCount = compareCounts(ca1, ca2);
    if (badCount) {
        cout << "The strings are not anagrams.\n";
    } else {
        cout << "The strings are anagrams.\n";
    }

    return 0;
}
