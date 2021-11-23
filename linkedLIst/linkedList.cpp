#include <iostream>
using namespace std;

struct Anime
{
    int age;
    Anime *next;
};

int main()
{
    Anime *head, *ptr;
    char ch = 'y';
    head = new Anime;
    ptr = head;
    while (ptr != NULL)
    {
        cout << "Enter the number: ";
        cin >> ptr->age;
        cout << "Proceed (y/n)? ";
        cin >> ch;
        if (ch == 'y')
        {
            ptr->next = new Anime;
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
        cout << ptr->age << '\n';
        ptr = ptr->next;
    }
    return 0;
}