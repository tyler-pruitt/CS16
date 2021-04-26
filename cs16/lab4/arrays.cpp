/*
/ Skeleton file for arrays.cpp for CS16, 2021, UCSB
/ Copyright © 2021 by Zachary Sisco. All rights reserved.
/
*/

// DO NOT MODIFY THESE NEXT 6 LINES - DO NOT ADD TO THEM
#include <iostream> // for cout, cin
#include <fstream>  // for ifstream
#include <cstdlib>  // for exit
using namespace std;
#include "headers.h"    // contains the function declarations
#include "constants.h"  // contains 4 global variables

int main( )
{
    // DO NOT MODIFY THESE NEXT 3 LINES - DO NOT ADD TO THEM
    ifstream ifs;
    int size = MAXSIZE, array[MAXSIZE];
    getArray(ifs, FILENAME, array, size);


    // hints for the tasks: 
    // all that needs to be in here is simple calls the functions, like these: 
    // in addition to, some print to std.out statements.
    // 
    // Your main() will ideally look clean and uncluttered and be made up
    // mostly of function calls.
    // 
    // Example:
    // ...
    // printArray(array, size);
    // max = maxArray(array, size);
    // min = minArray(array, size);
    // ...
    // ...etc...
    

    // PUT MISSING CODE HERE
    print_array(array, size);
    int max = maxArray(array, size);
    cout << "Max = " << max << endl;
    int min = minArray(array, size);
    cout << "Min = " << min << endl;
    int sum = sumArray(array, size);
    cout << "Sum = " << sum << endl;
    evensArray(array, size);
    primesArray(array, size);
    AllSearches(array, size);

    return 0;
}

// PUT MISSING FUNCTION DEFINITIONS HERE

void print_array(int arr[], int asize)
{
    for (int i=0;i<asize;i++)
    {
        if (i!=asize-1)
        {
            cout << arr[i] << ", ";
        }
        else
        {
            cout << arr[i] << endl;
        }
    }
}

int maxArray(int arr[], int asize)
{
    int max = arr[0];
    for (int i=1;i<asize;i++)
    {
        if (max<arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int minArray(int arr[], int asize)
{
    int min = arr[0];
    for (int i=1;i<asize;i++)
    {
        if (min>arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

int sumArray(int arr[], int asize)
{
    int sum = 0;
    for (int i=0;i<asize;i++)
    {
        sum+=arr[i];
    }
    return sum;
}

void evensArray(int arr[], int asize)
{
    cout << "Evens: ";
    for (int i=0;i<asize;i++)
    {
        if (arr[i]%2==0)
        {
            cout << arr[i] << ", ";
        }
    }
    cout << "end" << endl;
}

void primesArray(int arr[], int asize)
{
    cout << "Primes: ";
    bool isPrime;
    for (int i=0;i<asize;i++) // for each element in arr
    {
        if (arr[i]>1)
        {
            // do stuff here
            isPrime = true; // true until proved false
            if (arr[i]>2)
            {
                for (int j=2;j<arr[i];j++)
                {
                    if (arr[i]%j==0)
                    {
                        // set isPrime to false, then break
                        isPrime = false;
                        break;
                    }
                }
            }
            if (isPrime)
            {
                cout << arr[i] << ", ";
            }
        }
    }
    cout << "end" << endl;
}

int SeqSearch(int arr[], int array_size, int target)
{
    for (int i=0;i<array_size;i++)
    {
        if (arr[i]==target)
        {
            return i;
        }
    }
    return -1;
}

void AllSearches(int arr[], int array_size)
{
    int index;
    cout << "Searches:" << endl;
    for (int num : SEARCHES)
    {
        cout << "Looking for " << num << ". ";
        index = SeqSearch(arr, array_size, num);
        if (index!=-1)
        {
            cout << "Found at index: " << index << endl;
        }
        else
        {
            cout << "Not Found!" << endl;
        }
    }
}
