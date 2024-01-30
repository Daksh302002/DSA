#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *insert_front(node *head, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    head = newNode;
    return head;
}

void insert_middle(node *prev_node, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = prev_node->next;
    prev_node->next = newNode;
}

void insert_end(node **head_ref, int val)
{
    node *newNode = new node();
    newNode->data = val;
    newNode->next = NULL;

    node *last = *head_ref;

    if (*head_ref == NULL)
    {
        *head_ref = newNode;
        return;
    }

    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = newNode;
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
    head = insert_front(head, 1);
    head = insert_front(head, 2);
    insert_middle(head, 100);
    insert_end(&head, 734);
    insert_end(&head, 126);
    display(head);

    return 0;
}