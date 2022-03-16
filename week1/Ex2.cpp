#include <iostream>
using namespace std;

void bubbleSort(int array[], int size) {

  for (int step = 0; step < size; ++step) {
      
    for (int i = 0; i < size - step; ++i) {

      if (array[i] > array[i + 1]) {

        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

// print array
void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main() {
      int n;
    cout<<"\nEnter the size of the array:";
    cin>>n;
    int array[n];
    cout<<"\nEnter the element:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
  
  bubbleSort(array, n);
  
  cout << "Sorted Array in Ascending Order:\n";  
  printArray(array, n);
}