#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (key < arr[j] && j >= 0)
        {
            arr[j - 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}
int main()
{
    int n, i, j, key;
    cout << "Enter the size of the array";
    cin >> n;
    int a[n - 1];
    cout << "Enter the array elements one by one:\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "The sorted array is: \n";
    insertionSort(a, n);
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}