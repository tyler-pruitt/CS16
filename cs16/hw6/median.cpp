#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int indexOfSmallest(int a[], int startIndex, int size)
{
    int min = a[startIndex];
    int indexOfMin = startIndex;

    for (int index=startIndex+1;index<size;index++)
    {
        if (a[index]<min)
        {
            min = a[index];
            indexOfMin = index;
        }
    }
    return indexOfMin;
}

void selectionSort(int arr[], int length)
{
    int nextSmallest, temp;

    for (int index=0;index<length-1;index++)
    {
        nextSmallest = indexOfSmallest(arr, index, length);
        //swap values of a[index] and a[nextSmallest]
        temp = arr[index];
        arr[index] = arr[nextSmallest];
        arr[nextSmallest] = temp;
    }
}

void FindMedian(string filename, ifstream &inStream)
{
    const int size = 100;
    int data[size] = {0};

    double next;
    int count = 0;

    inStream.open(filename);

    while (inStream >> next)
    {
        data[count] = next;
        count++;
    }

    inStream.close();
    
    //sort data array
    selectionSort(data, count);

    int middleIndex=count/2;

    ofstream outStream;
    outStream.open("median_output.dat");

    if (count%2==0)
    {
        middleIndex--;
        double median;
        median=double(data[middleIndex]+data[middleIndex+1])/2;

        if (median==round(median))
        {
            string temp=to_string(median);
            string temp2=temp.substr(0, temp.find("."));
            median=stod(temp2);
        }
        else
        {
            outStream.setf(ios::fixed);
            outStream.setf(ios::showpoint);
            outStream.precision(1);
        }

        outStream << median << endl;
    }
    else
    {
        int median;
        median=data[middleIndex];
        outStream << median << endl;
    }

    outStream.close();

}
