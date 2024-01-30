#include <iostream>
#include <vector>
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

void buildHeap(vector<int> &arr, int size)
{
    int n = (size - 2) / 2;
    for (int i = n; i >= 0; i--)
    {
        minHeapify(arr, size, i);
    }
}
int main()
{
    vector<int> arr = {10, 5, 20, 2, 4, 8};
    int size = arr.size();
    buildHeap(arr, size);
    for (auto x : arr)
    {
        cout << x << " ";
    }

    return 0;
}