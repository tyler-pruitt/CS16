#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

int indexOfSmallest(double a[], int startIndex, int size)
{
    double min = a[startIndex];
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

void selectionSort(double arr[], int length)
{
    int nextSmallest;
    double temp;

    for (int index=0;index<length-1;index++)
    {
        nextSmallest = indexOfSmallest(arr, index, length);
        //swap values of a[index] and a[nextSmallest]
        temp = arr[index];
        arr[index] = arr[nextSmallest];
        arr[nextSmallest] = temp;
    }
}

double calculateMean(double arr[], int length)
{
    double mean, sum;

    for (int i=0;i<length;i++)
    {
        sum+=arr[i];
    }

    mean=sum/length;

    return mean;
}

double calculateMedian(double arr[], int length)
{
    //sort data array
    selectionSort(arr, length);

    int middleIndex=length/2;
    double median;

    if (length%2==0)
    {
        middleIndex--;
        median=(arr[middleIndex]+arr[middleIndex+1])/2;
    }
    else
    {
        median=arr[middleIndex];
    }

    return median;
}

double calculateStddev(double arr[], int length, double avg)
{
    double Stddev, sum=0;
    int n=0;
    
    for (int i=0;i<length;i++)
    {
        sum+=pow((arr[i]-avg), 2);
        n++;
    }
    sum/=(n-1);
    Stddev = pow(sum, 0.5);
    
    return Stddev;
}


int main()
{
    string filename;

    cout << "Enter filename: ";
    getline(cin, filename);

    ifstream inStream;

    inStream.open(filename);
    
    const int size = 100;
    double data[size] = {0.0};

    double next;
    int count = 0;

    while (inStream >> next)
    {
        data[count] = next;
        count++;
    }

    double mean = calculateMean(data, count);
    double median = calculateMedian(data, count);
    double stddev = calculateStddev(data, count, mean);

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(3);

    cout << "Mean = " << mean << endl;
    cout << "Median = " << median << endl;
    cout << "Stddev = " << stddev << endl;
    
    inStream.close();

    
    return 0;
}