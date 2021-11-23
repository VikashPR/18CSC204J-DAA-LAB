#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};
int main()
{
    Node *head, *ptr;
    char dec = 'y';
    head = new Node;
    ptr = head;
    while (ptr != NULL)
    {
        cout << "Enter the node data: ";
        cin >> ptr->data;
        cout << "proceed (y/n): ";
        cin >> dec;
        if (dec == 'y')
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
    cout << "The linked list Data:";
    ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
    return 0;
}