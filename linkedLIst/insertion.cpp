#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};
Node *head = NULL;
void deleteBeg()
{
    // if list is empty.
    if (head == NULL)
        cout << "LIST IS EMPTY\n";
    else
    {
        Node *ptr = head;
        head = head->next;
        free(ptr);
    }
}
// Main Function
int main()
{
    Node *head, *ptr;
    head = new Node;
    ptr = head;
    char ch = 'y';
    while (ptr != NULL)
    {
        cout << "Enter the data: ";
        cin >> ptr->data;
        cout << "Proceed (y/n)? ";
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
    cout << "The linkedList elements are:"
         << "\n";
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << '\n';
        ptr = ptr->next;
    }
    cout << "Deleting node at the end:";
    deleteBeg();
    return 0;
}