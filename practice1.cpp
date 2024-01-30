#include <iostream>
using namespace std;
#define n 100

class queue
{
    int arr[n];
    int rare = -1;
    int front = -1;

public:
    bool isFull()
    {
        if (rare == n - 1)
        {
            return true;
        }
        return false;
    }
    bool isEmpty()
    {
        if (rare == -1 && front == -1)
        {
            return true;
        }
        return false;
    }

    void denqueue()
    {
        if (isEmpty())
        {
            cout << "empty hai " << endl;
        }

        else if (front == rare)
        {
            front = rare = -1;
        }
        else
        {
            cout << "Dequeued element " << arr[front] << endl;
            front++;
        }
    }

    int equeue(int val)
    {
        if (isFull())
        {
            cout << "Full hai " << endl;
        }

        else if (isEmpty())
        {
            front = rare = 0;
        }
        else
        {
            rare++;
        }
        arr[rare] = val;
    }

    void print()
    {
        for (int i = 0; i <= rare; i++)
        {
            cout << arr[i] << " " << endl;
        }
    }
};

int main()
{
    queue q;
    q.equeue(1);
    q.equeue(2);
    q.equeue(3);
    q.print();
    q.denqueue();
    cout << endl;
    q.print();
    return 0;
}