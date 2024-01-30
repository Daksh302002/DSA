#include <iostream>
#include <limits.h>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

bool IsBSTUtils(node *root, int MinVal, int MaxVal)
{
    if (root == NULL)
        return true;
    if ((root->data > MinVal) && (root->data < MaxVal) && (IsBSTUtils(root->left, MinVal, root->data)) && (IsBSTUtils(root->right, root->data, MaxVal)))
        return true;
    return false;
}

bool isBST(node *root)
{
    return IsBSTUtils(root, INT_MIN, INT_MAX);
}

int main()
{
    node *root = new node(7);
    root->left = new node(4);
    root->right = new node(9);
    root->left->left = new node(1);
    root->left->right = new node(6);

    if (isBST(root))
    {
        cout << "Yes,The tree is bst ";
    }
    else
    {
        cout << "No,The tree is not bst ";
    }

    return 0;
}