#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

void display(node *head) // linked list traversal
{
    while (head != NULL)
    {
        cout << head->data << " " << endl;
        head = head->next;
    }
}

void displayCircularLinkedList(node *first)
{
    node *temp = first;
    // if (first != NULL)
    // {
    //     cout << temp->data << " ";
    //     temp = temp->next;

    //     while (temp != first)
    //     {

    //         cout << temp->data << " ";
    //         temp = temp->next;
    //     }
    // }

    do
    {

        cout << temp->data << " ";
        temp = temp->next;
    } while (first != temp);
}

int main()
{
    node *head = new node();
    node *second = new node();
    node *third = new node();
    node *fourth = new node();
    node *fifth = new node();
    node *sixth = new node();
    node *seventh = new node();
    node *eighth = new node();
    node *ninth = new node();

    head->data = 5;
    head->next = second;

    second->data = 1;
    second->next = third;

    third->data = -3;
    third->next = fourth;

    fourth->data = 11;
    fourth->next = fifth;

    fifth->data = 10;
    fifth->next = sixth;

    sixth->data = 2;
    sixth->next = seventh;

    seventh->data = 7;
    seventh->next = eighth;

    eighth->data = 9;
    eighth->next = ninth;

    ninth->data = 18;
    ninth->next = head;

    displayCircularLinkedList(head);

    return 0;
}