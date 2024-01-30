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

void insertAfter(node *prev_node, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
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
    head = insertFront(head, 7);
    head = insertFront(head, 5);
    head = insertFront(head, -3);
    insertAfter(head, 100);             // -3 100 5 7
    insertAfter(head->next, 100);       // -3 5 100 7
    insertAfter(head->next->next, 100); // -3 5 7 100
    display(head);
    return 0;
}