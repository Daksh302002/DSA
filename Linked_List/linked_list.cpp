#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void display(node *head)
{
    cout << "Elements: " << endl;
    while (head)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
}

int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    display(head);
    return 0;
}