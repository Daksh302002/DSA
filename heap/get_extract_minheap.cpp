#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

void MinHeapify(vector<int> &arr, int size, int i)
{
    int li = (2 * i) + 1;
    int ri = (2 * i) + 2;
    int smallest = i;
    if (li < size && arr[li] < arr[smallest])
        smallest = li;
    if (ri < size && arr[ri] < arr[smallest])
        smallest = ri;
    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        MinHeapify(arr, size, smallest);
    }
}

int Extract(vector<int> &arr, int &size)
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
        MinHeapify(arr, size, i);
    }
    return arr[size];
}

int main()
{
    vector<int> arr = {20, 25, 30, 35, 40, 80, 32, 100, 70, 60};
    int size = arr.size();
    cout << Extract(arr, size) << endl;
    for (int i = 0; i < size; i++)
    {
        MinHeapify(arr, size, i);
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}