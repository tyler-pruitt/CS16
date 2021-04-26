#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inf;
    double num, sum(0), average;
    int count = 0;

    inf.open("MyInputs.txt");

    while (inf >> num)
    {
        sum+=num;
        count++;
    }

    inf.close();

    average = sum/count;

    cout << "The average is: " << average << endl;

    return 0;
}