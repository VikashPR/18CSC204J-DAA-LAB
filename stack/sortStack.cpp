#include <iostream>
using namespace std;
int arr[101], n = 100, top = -1;
void push(int mark)
{
    if (top >= n - 1)
        cout << "Stack Overflow" << endl;
    else
    {
        top++;
        arr[top] = mark;
    }
}
void pop()
{
    if (top <= -1)
        cout << "Stack Underflow" << endl;
    else
    {
        cout << "The popped element is " << arr[top] << endl;
        top--;
    }
}
void display()
{
    if (top >= 0)
    {
        cout << "Marks  are:";
        for (int i = top; i >= 0; i--)
            cout << arr[i] << " ";
        cout << endl;
    }
    else
        cout << "Stack is empty";
}
int main()
{
    int n, data, newArr[101], temp;
    cout << "\nEnter the number of subjects:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the mark:";
        cin >> data;
        push(data);
    }
    for (int i = 0; i < n; i++)
    {
        newArr[i] = arr[i];
    }
    cout << "New Array Value:";
    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << " ";
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (newArr[j] > newArr[j + 1])
            {
                temp = newArr[j];
                newArr[j] = newArr[j + 1];
                newArr[j + 1] = temp;
            }
        }
    }
    cout << "\nSorted newArray\n";
    for (int i = 0; i < n; i++)
    {
        cout << newArr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == newArr[j])
            {
                cout << j << " ";
            }
        }
    }

    return 0;
}