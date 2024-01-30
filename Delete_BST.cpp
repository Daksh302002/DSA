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
node *inordersucc(node *root)
{
    node *curr;
    while (curr && curr->left != NULL)
    {
        curr = curr->left;
    }
    return curr;
}
node *deleteBST(node *root, int key)
{
    if (root->data > key)
    {
        root->left = deleteBST(root->left, key);
    }
    else if (root->data < key)
    {
        root->right = deleteBST(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        node *temp = inordersucc(root->right);
        root->data = temp->data;
        root->right = deleteBST(root->right, temp->data);
    }
    return root;
}
void inorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main()
{
    node *root = new node(4);
    root->left = new node(2);
    root->right = new node(5);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->right = new node(7);
    cout << "Inorder traversal: " << endl;
    inorder(root);
    root = deleteBST(root, 5);
    cout << endl;
    cout << "Inorder traversal after deletion value 5: " << endl;
    inorder(root);
    return 0;
}
