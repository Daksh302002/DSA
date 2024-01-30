#include <iostream>
#include <vector>
using namespace std;

void maxHeapify(vector<int> &arr, int size, int i)
{
    int li = (2 * i) + 1;
    int ri = (2 * i) + 2;
    int largest = i;
    if (li < size && arr[li] > arr[largest])
    {
        largest = li;
    }
    if (ri < size && arr[ri] > arr[largest])
    {
        largest = ri;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        maxHeapify(arr, size, largest);
    }
}

void buildHeap(vector<int> &arr, int size)
{
    int n = (size - 2) / 2;
    for (int i = n; i >= 0; i--)
    {
        maxHeapify(arr, size, i);
    }
}

void heapSort(vector<int> &arr, int size)
{
    buildHeap(arr, size);
    for (int i = size - 1; i >= 0; i--)
    {
        swap(arr[0], arr[i]);
        maxHeapify(arr, i, 0);
    }
}

int main()
{
    vector<int> arr = {1, 3, 5, 4, 6, 13, 10, 9, 8, 15, 17};
    int size = arr.size();

    heapSort(arr, size);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}