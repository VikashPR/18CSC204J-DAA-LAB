#include <iostream>
#include <climits>
using namespace std;
int FindMax(int arr[], int n)
{
    static int i = 0, max = INT_MIN;
    if (i < n)
    {
        if (arr[i] >= max)
            max = arr[i];
        i++;
        FindMax(arr, n);
    }
    return max;
}
int FindMin(int arr[], int n)
{
    static int i = 0, min = INT_MAX;
    if (i < n)
    {
        if (arr[i] <= min)
            min = arr[i];
        i++;
        FindMin(arr, n);
    }
    return min;
}
int main()
{
    int n, i;
    cout << "Enter the array size:";
    cin >> n;
    int arr[n];
    cout << "Enter the array element:";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum Element of the array is: " << FindMax(arr, n) << endl;
    cout << "Minimum Element of the array is: " << FindMin(arr, n) << endl;
}