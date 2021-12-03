#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
int main()
{
    Node *ptr, *head, *newNode, *prePtr, *temp;
    head = new Node;
    ptr = head;
    char ch = 'y';
    cout << "Create LinkedList:";
    while (ptr != NULL)
    {
        cout << "\nEnter the data value:";
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
    while (ptr->next != NULL)
    {
        if (ptr->data == ptr->next->data)
        {
            ptr->next = ptr->next->next;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }

    return 0;
}