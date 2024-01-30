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

void delete_node(node **head_ref, int key)
{
    node *temp, *prev;
    temp = *head_ref;
    if (temp == NULL)
        return;
    if (temp != NULL && temp->data == key)
    {
        *head_ref = temp->next;
        free(temp); // memory ko free krta hai
        return;
    }

    while (temp != NULL && temp->data != key)
    {
        prev = temp;
        temp = temp->next;
    }
    prev->next = temp->next;
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
    head = insert_front(head, 1);
    head = insert_front(head, 2);
    head = insert_front(head, 4);
    head = insert_front(head, 3);
    head = insert_front(head, 5);
    display(head);

    cout << endl;
    delete_node(&head, 5);
    display(head);
    return 0;
}