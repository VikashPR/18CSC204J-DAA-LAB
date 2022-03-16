// Insertion sort using C++
/* 
##Algorithm##
    1) consider that first element in array is in sorted order
    2) take key value as array[1]
    3) take j as key-1
    4) iterate the array till j>=0 and j > key
    5) swap the elements
 */

#include <iostream>

using namespace std;

void printArr(int array[], int size)
{ 
    int j;
    for (j = 0; j < size; j++)
    {
        cout <<" "<< array[j];  
    }
    cout << endl;
}

void insertionSort(int arr[], int length) 
{
    int i, j, key;
    for (i = 1; i < length; i++) 
    {
        key = arr[i];
        j = i-1;
        
        while (j >= 0 && arr[j] >key) 
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j +1] = key;
        
    }
    cout << "Sorted Array: ";
    printArr(arr, length);
}



// main function
int main() 
{
    int n;
    cout<<"\nEnter the size of the array:";
    cin>>n;
    int array[n];
    cout<<"\nEnter the element:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    insertionSort(array, n);
    return 0;
}

