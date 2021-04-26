


#include <iostream>

using namespace std;


int indexOfSmallest(int a[], int startIndex, int size) {
    int min = a[startIndex];
    int indexOfMin = startIndex;

    for (int index = startIndex + 1; index < size; index++) {
        if (a[index] < min) {
            min = a[index];
            indexOfMin = index;
        }
    }
    return indexOfMin;
}

void swapValues(int &v1, int &v2) {
   int temp;
   temp = v1;
   v1 = v2;
   v2 = temp; 
}

void selectionSort(int a[], int size) {
    int nextSmallest = 0;
    
    for (int index = 0; index < size - 1; index++) {
        nextSmallest = indexOfSmallest(a, index, size);
        // swap index with nextSmallest
        swapValues(a[index], a[nextSmallest]);
    }
}

void bubbleSort(int a[], int size) {
    for (int i = size - 1; i >= 0; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "a[" << j-1 << "] a[" << j << "]" << endl;
            cout << a[j-1] << "  " << a[j] << endl;
            if (a[j - 1] > a[j]) {
                swapValues(a[j - 1], a[j]);
            }
        }
    }
}

// Pre-condition: array is sorted in ascending order
// Post-condition: if target is found, return non-negative index; otherwise -1
/*
    High-level idea:
    1. Start by looking at the item in the _middle_ of the list
    2. If the number is = our target, done!
    3. If it is greater than our target, look in the 1st half of the list
    4. If it is less than our target, look in the 2nd half
    5. repeat
*/
int binarySearch(int a[], int size, int target) {
    int first = 0;
    int last = size - 1;
    int mid;

    while (first < last) {
        mid = (first + last) / 2;
        if (target == a[mid]) {
            return mid;
        }
        else if (target < a[mid]) {
            last = mid - 1;
        } 
        else {
            first = mid + 1;
        }
    }
    return -1;
}

int main() {
    const int SIZE = 3;
    int arr[SIZE] = {3,1,2};
    //int arr[] = {8,6,10,2,16}; // same thing
    selectionSort(arr, SIZE);
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    const int SIZE2 = 5;
    int arr2[SIZE2] = {8,6,5,3,1};
    bubbleSort(arr2, SIZE2);
    for (int i = 0; i < SIZE2; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl << endl;

    int target = 6;
    cout << "Binary search: target = " << target << endl;
    cout << "index: " << binarySearch(arr2, SIZE2, target) << endl;
    return 0;
}