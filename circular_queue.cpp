#include <iostream>
#define n 100
using namespace std;

class circular_queue
{
private:
    int arr[n];
    int front = -1;
    int rare = -1;

public:
    bool isFull()
    {
        if (((rare + 1) % n) == front)
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

    int enqueue(int val)
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
            rare = (rare + 1) % n;
        }
        arr[rare] = val;
    }

    int denqueue()
    {
        if (isEmpty())
        {
            cout << "empty hai ";
        }

        else if (front == rare)
        {
            front = rare = -1;
        }
        else
        {
            front = (front + 1) % n;
        }
    }
};

int main()
{
    circular_queue q;
    q.enqueue(1);
    q.enqueue(1);
    return 0;
}