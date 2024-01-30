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

int findMin(node *root)
{

    while (root->left != NULL)
    {
        root = root->left;
    }
    return root->data;
}

int main()
{
    node *root = new node(15);
    root->left = new node(10);
    root->right = new node(20);
    root->left->left = new node(8);
    root->left->right = new node(12);
    root->right->left = new node(16);
    cout<<findMin(root);
    return 0;
}