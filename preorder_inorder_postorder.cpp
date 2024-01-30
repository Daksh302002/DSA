#include <iostream>
using namespace std;

struct node
{
    char data;
    node *left;
    node *right;
    node(char ch)
    {
        data = ch;
        left = NULL;
        right = NULL;
    }
};

void preorder(node *root) // root left,right
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node *root) // left,right,root
{
    if (root == NULL)
        return;
    preorder(root->left);
    preorder(root->right);
    cout << root->data << " ";
}
void inorder(node *root) //  left,root,right
{
    if (root == NULL)
        return;
    preorder(root->left);
    cout << root->data << " ";
    preorder(root->right);
}

int main()
{
    node *root = new node('F');
    root->left = new node('D');
    root->right = new node('J');
    root->left->left = new node('B');
    root->left->right = new node('E');
    root->right->right = new node('K');
    root->right->left = new node('G');
    cout << "Preorder traversal: " << endl;
    preorder(root);
    cout << endl;

    cout << "Postorder traversal: " << endl;
    postorder(root);
    cout << endl;

    cout << "inorder traversal: " << endl;
    inorder(root);

    return 0;
}