#include <iostream>
#include <math.h>
using namespace std;

class minHeap
{
    int *arr;
    int capacity;
    int size;

public:
    minHeap(int c)
    {
        arr = new int[c];
        capacity = c;
        size = 0;
    }
    int left(int i) { return 2 * i + 1; }
    int right(int i) { return 2 * i + 2; }
    int parent(int i) { return floor(abs(i - 1) / 2); }

    void insert(int data)
    {
        if (size == capacity)
        {
            cout << "Heap full hai ";
            return;
        }

        size++;
        arr[size - 1] = data;
        int i = size - 1;
        while (i != 0 && arr[parent(i)] > arr[i])
        {
            int temp = arr[parent(i)];
            arr[parent(i)] = arr[i];
            arr[i] = temp;
            i = parent(i);
        }
    }

    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
    }
};

int main()
{
    minHeap h(5);
    h.insert(1);
    h.insert(3);
    h.insert(2);
    h.print();
    return 0;
}