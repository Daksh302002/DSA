#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *insertFront(node *head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    return head;
}

void display(node *head)
{
    cout << "Elements: " << endl;
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    head = insertFront(head, 1);
    head = insertFront(head, 2);
    display(head);

    return 0;
}