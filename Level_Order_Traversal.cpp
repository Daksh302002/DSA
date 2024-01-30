#include <iostream>
#include <queue>
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

void LevelOrder(node *root)
{
    if (root == NULL)
        return;
    queue<node *> Q;
    Q.push(root);
    while (Q.empty())
    {
        node *current = Q.front();
        Q.pop();
        cout << current->data << " ";
        if (current->left != NULL)
        {
            Q.push(current->left);
        }
        if (current->right != NULL)
        {
            Q.push(current->right);
        }
    }
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
    LevelOrder(root);
    return 0;
}