#include <iostream>
using namespace std;
#define n 100
class queue
{
private:
    int arr[n];
    int front = -1;
    int rare = -1;

public:
    bool isEmpty()
    {
        if (front == -1 || front > rare)
        {
            return true;
        }
        else
            return false;
    }
    bool isFull()
    {
        if (rare == n - 1)
        {
            return true;
        }
        else
            return false;
    }
    void enqueue(int val)
    {
        if (isFull())
        {
            cout << "Queue Underflow " << endl;
        }
        rare++;
        arr[rare] = val;

        if (front == -1)
            front++;
    }

    void dequeue()
    {
        if (isEmpty())
        {
            cout << "Queue Overflow " << endl;
        }
        else
        {
            cout << "Dequeued element: " << arr[front] << endl;
            front++;
        }
    }

    void display()
    {
        cout << "Elements: " << endl;
        for (int i = 0; i <= rare; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    // q.display();

    return 0;
}