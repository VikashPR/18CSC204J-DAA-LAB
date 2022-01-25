#include <iostream>
using namespace std;
// defining node type using struct
struct node
{
    int data;
    struct node *next;
};

// function to create new node
node *newnode(int key)
{
    struct node *temp = new node;
    temp->data = key;
    temp->next = nullptr;
    return temp;
}

node *merged_linkedlist(node *head1, node *head2)
{

    // Check if any linked list is empty
    if (head1 == nullptr)
    {
        return head2;
    }
    else if (head2 == nullptr)
    {
        return head1;
    }

    // head pointer for merged linked list
    node *newhead = nullptr;

    // check for smallest element by comparing first two elements
    // of both linked lists
    if (head1->data <= head2->data)
    {

        newhead = head1;
        // moving head 1 to point to next element in the
        // linked list 1 for further comparison
        head1 = head1->next;
    }
    else
    {

        newhead = head2;
        // moving head 2 to point to next element in the
        // linked list 2 for further comparison
        head2 = head2->next;
    }

    // new pointer to move forward and store new elements and
    // keeping head pointer of new linked list as it is
    node *temphead = newhead;

    // run the loop until we reach last element of both lists
    while (head1 != nullptr && head2 != nullptr)
    {
        node *temp = nullptr;
        if (head1->data <= head2->data)
        {
            temp = head1;
            head1 = head1->next;
        }
        else
        {
            temp = head2;
            head2 = head2->next;
        }

        // store the next element and move forward to new node
        temphead->next = temp;
        temphead = temp;
    }

    // if any element is left then add it to final linked list
    if (head1 != nullptr)
    {
        temphead->next = head1;
    }
    else if (head2 != nullptr)
    {
        temphead->next = head2;
    }

    return newhead;
}

void display(node *node1)
{

    while (node1 != nullptr)
    {
        cout << node1->data << " ";
        node1 = node1->next;
    }
    cout << endl;
}

int main()
{
    // create linked list 1
    node *head1 = newnode(1);
    head1->next = newnode(3);
    head1->next->next = newnode(9);

    cout << "linked list 1 - ";
    display(head1);

    // create linked list 2
    node *head2 = newnode(0);
    head2->next = newnode(2);
    head2->next->next = newnode(4);

    cout << "linked list 2 - ";
    display(head2);

    node *head = merged_linkedlist(head1, head2);
    cout << "merged linked list - ";
    display(head);
    return 0;
}
