#include <iostream>
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

int min(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    node *curr = root;

    while (curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr->data;
}

int max(node *root)
{
    if (root == NULL)
    {
        return -1;
    }
    node *curr = root;
    while (curr->right != NULL)
    {
        curr = curr->right;
    }
    return curr->data;
}

int main()
{
    node *root = new node(15);
    root->left = new node(10);
    root->right = new node(20);
    root->left->left = new node(8);
    root->left->right = new node(12);
    root->right->right = new node(25);
    root->right->left = new node(17);
    cout << "The minimum value is " << min(root) << endl;
    cout << "The maximum value is " << max(root);
    return 0;
}