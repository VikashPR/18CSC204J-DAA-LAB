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