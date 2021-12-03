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
    int choose;
    int con = 0;
    while (con != 8)
    {
        cout << "\n--------------choose------------------\n";
        cout << "1 => Insert in the Beginning of the list\n";
        cout << "2 => Insert in the Middle of the list\n";
        cout << "3 => Delete in the Beginning of the list\n";
        cout << "4 => Delete in the Middle of the list\n";
        cout << "5 => Delete in the End of the list\n";
        cout << "6 => Display Node count\n";
        cout << "7 => Display lined list\n";
        cout << "8 => Exit\n";
        cout << "\nChoose:";
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
        case 2:
            newNode = new Node;
            int val;
            cout << "Enter the data to insert in th middle:";
            cin >> newNode->data;
            ptr = head;
            prePtr = ptr;
            cout << "Enter the number before which the val to be inserted:";
            cin >> val;
            while (ptr->data != val)
            {
                prePtr = ptr;
                ptr = ptr->next;
            }
            prePtr->next = newNode;
            newNode->next = ptr;
            break;
        case 3:
            cout << "Deleting the Node at beginning:";
            ptr = head;
            head = head->next;
            free(ptr);
            break;
        case 4:
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
            break;
        case 5:
            cout << "Delete in the end of the list:";
            ptr = head;
            while (ptr->next != NULL)
            {
                prePtr = ptr;
                ptr = ptr->next;
            }
            prePtr->next = NULL;
            free(ptr);
            break;
        case 6:
            cout << "\nTotal number of node in the list is:" << count;
            break;
        case 7:
            cout << "Linked List:";
            ptr = head;
            while (ptr != NULL)
            {
                cout << "->" << ptr->data;
                ptr = ptr->next;
            }
            break;
        case 8:
            cout << "bai bai Cya:";
            con = 8;
            break;
        }
    }
    return 0;
}