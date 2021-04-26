//Tyler Pruitt
//Collaborator: Kristin Cheung

// Define your FOUR functions here (no more, no less):
// First, the 3 functions for the selectionSort:
// swap_values, find_index_of_swap, sort

void sort(bool descend, int a[], int length, int startIndex)
{
    int nextIndex;

    //the base case
    if (length <= 1)
    {
        return;
    }
    //the recursive case
    nextIndex = find_index_of_swap(descend, a, length, startIndex);
    swap_values(a[startIndex], a[nextIndex]);
    sort(descend, a, length-1, startIndex+1);
}

void swap_values(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int find_index_of_swap(bool descend, int a[], int length, int startIndex)
{
    if (descend)
    {
        //find the index of the maximum
        int maxIndex = startIndex;
        for (int i=startIndex+1;i<startIndex+length;i++)
        {
            if (a[maxIndex] < a[i])
            {
                maxIndex = i;
            }
        }
        return maxIndex;
    }
    else
    {
        //find the index of the minimum
        int minIndex = startIndex;
        for (int i=startIndex+1;i<startIndex+length;i++)
        {
            if (a[minIndex] > a[i])
            {
                minIndex = i;
            }
        }
        return minIndex;
    }
}

// Next, define the function getArray here. 
// This is the same one we used in Lab 4, so you can copy it over as is.
void getArray(ifstream& inStream, string fileName, int a[], int length)
{
    inStream.open(fileName);
    if (inStream.fail()) 
    { 
        cerr << "Input file opening failed.\n"; 
        exit(1); 
    }
    for (int i=0;i<length;i++)
    {
        inStream >> a[i];
    }
}
