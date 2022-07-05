#include<iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i ++){
        // First element in the array is already sorted
        int current = arr[i];
        // start of unsorted part of the array
        int j = i - 1;
        while(j >= 0 && arr[j] > current){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = current;
    }
}

int main(){
    int arr[10] = {10,9,8,7,6,5,4,3,2,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, len);
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
}