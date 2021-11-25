#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *ptr, *head, *prePtr;
    head = new Node;
    ptr = head;
    char ch = 'y';
    while (ptr != NULL)
    {
        cout << "Enter the data value:";
        cin >> ptr->data;
        cout << "Proceed insertion?(y/n)";
        cin >> ch;
        if (ch == 'y')
        {
            ptr->next = new Node;
            ptr = ptr->next;
        }
        else
        {
            ptr->next = NULL;
            ptr = NULL;
        }
    }
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    int del;
    cout << "\nEnter the node value to be deleted:";
    cin >> del;
    ptr = head;
    while (ptr->data != del)
    {
        prePtr = ptr;
        ptr = ptr->next;
    }
    prePtr->next = ptr->next;
    free(ptr);
    cout << "List datas after deleting:";
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    return 0;
}