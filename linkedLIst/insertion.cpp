#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *ptr, *head, *prePtr, *newNode;
    head = new Node;
    ptr = head;
    char ch = 'y';
    while (ptr != NULL)
    {
        cout << "Enter the data value:";
        cin >> ptr->data;
        cout << "Proceed creation?(y/n)";
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
    int count = 0;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
        count++;
    }
    cout << "\nTotal number of node in the list is:" << count;
    int choose;
    cout << "\n--------------Choose------------------\n";
    cout << "1 => Insert in the Beginning of the list";
    cout << "\nChoose:";
    // cout << "2 => Insert in the Middle of the list";
    // cout << "2 => Insert in the End of the list";
    cin >> choose;
    switch (choose)
    {
    case 1:
        ptr = head;
        newNode = new Node;
        cout << "\nEnter the data to insert in the Beginning:";
        cin >> newNode->data;
        head = newNode;
        newNode->next = ptr;
        break;
        // case2:
        //     newNode = new Node;
        //     cout << "Enter the data to insert in the End:";
        //     cin >> newNode->data;
        //     while (ptr->next != NULL)
        //     {
        //     }
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