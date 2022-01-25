#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *newNode(int data)
{
    struct Node *node = (struct Node *)
        malloc(sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

void inorder(Node *root)
{
    if (root == NULL)
        return;

    inorder(root->left);

    cout << root->data << " ";

    inorder(root->right);
}

int isIdentical(Node *r1, Node *r2)
{
    if (r1 == NULL && r2 == NULL)
        return 1;
    else if (r1 != NULL && r2 == NULL)
        return 0;
    else if (r1 == NULL && r2 != NULL)
        return 0;
    else
    {
        if (r1->data == r2->data && isIdentical(r1->left, r2->left) && isIdentical(r1->right, r2->right))
            return 1;
        else
            return 0;
    }
}

int main()
{
    struct Node *r1 = newNode(5);
    struct Node *r2 = newNode(5);

    r1->left = newNode(2);
    r1->right = newNode(4);
    r1->left->left = newNode(1);
    r1->left->right = newNode(1);

    r2->left = newNode(2);
    r2->right = newNode(4);
    r2->left->left = newNode(2);
    r2->left->right = newNode(1);

    if (isIdentical(r1, r2))
        cout << "Both BSTs are identical";
    else
        cout << "BSTs are not identical";

    return 0;
}