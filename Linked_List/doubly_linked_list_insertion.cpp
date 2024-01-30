#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *insert_front(node *head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL)
    {
        head->prev = newNode;
    }
    head = newNode;

    return head;
}

void insert_middle(node *prev_node, int data)
{
    node *newNode = new node();
    newNode->data = data;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
    newNode->prev = prev_node;
    if (newNode->next != NULL)
    {
        newNode->next->prev = newNode;
    }
}
void insert_end(node **head_ref, int data)
{
    node *newNode = new node();
    newNode->data = data;
    newNode->next = NULL;

    node *last = *head_ref;
    if (*head_ref == NULL)
    {
        newNode->prev = NULL;
        *head_ref = newNode;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
    newNode->prev = last;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    head = insert_front(head, 4);
    head = insert_front(head, 11);
    head = insert_front(head, -3);
    insert_middle(head->next, 234);
    insert_end(&head, 23);
    insert_end(&head, 126);
    display(head);
    return 0;
}