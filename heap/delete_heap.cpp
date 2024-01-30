#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void minHeapify(vector<int> &arr, int size, int i)
{
    int li = ((2 * i) + 1);
    int ri = ((2 * i) + 2);
    int smallest = i; // hum abhi maan ke chl rhe h ki root mera sbse smallest hai..

    if (li < size && arr[li] < arr[smallest])
        smallest = li;
    if (ri < size && arr[ri] < arr[smallest])
        smallest = ri;

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        minHeapify(arr, size, smallest);
    }
}

int ExactMin(vector<int> &arr, int &size)
{
    if (size == 0)
        return INT_MAX;
    if (size == 1)
    {
        size--;
        return arr[0];
    }
    swap(arr[0], arr[size - 1]);
    size--;

    for (int i = 0; i < size; i++)
    {
        minHeapify(arr, size, i);
    }
    return arr[size];
}

void decreaseKey(vector<int> &arr, int index, int x)
{
    arr[index] = x;
    int size = arr.size();
    for (int i = size - 1; i >= 0; i--)
    {
        minHeapify(arr, size, i);
    }
}

void deleteKey(vector<int> &arr, int &size, int index)
{
    decreaseKey(arr, index, INT_MIN);
    ExactMin(arr, size);
}

int main()
{
    vector<int> arr = {10, 20, 40, 80, 100, 70};

    vector<int> brr = arr;
    int index = 3;
    int x = 5;
    int size = arr.size();

    decreaseKey(brr, index, x);
    cout << "After decreasing the key at index: ";
    for (int i = 0; i < size; i++)
    {
        cout << brr[i] << " ";
    }

    cout << endl;

    deleteKey(arr, size, index);
    cout << "After Delete the key at index: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}