#include <iostream>
using namespace std;

struct node
{
    int data;
    node *left, *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

node *insertBST(node *root, int val)
{
    if (root == NULL)
    {
        return new node(val);
    }
    if (val < root->data)
    {
        root->left = insertBST(root->left, val);
    }
    else
    {
        root->right = insertBST(root->right, val);
    }
    return root;
}
node *searchBST(node *root, int key)
{
    if (root == NULL)
        return NULL;
    if (root->data == key)
    {
        return root;
    }
    if (root->data > key)
    {
        return searchBST(root->left, key);
    }
    else
    {

        return searchBST(root->right, key);
    }
}
int main()
{

    node *root = NULL;
    root = insertBST(root, 5);
    insertBST(root, 1);
    insertBST(root, 3);
    insertBST(root, 4);
    insertBST(root, 2);
    insertBST(root, 7);
    if (searchBST(root, 1021))
    {
        cout << "found";
    }
    else
    {
        cout << "not found";
    }
    return 0;
}