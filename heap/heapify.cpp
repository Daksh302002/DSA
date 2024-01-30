#include <iostream>
#include <vector>
using namespace std;

void minHeapify(vector<int>&arr, int size, int i)
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

int main()
{
    vector<int> arr = {40, 20, 30, 35, 25, 80, 32, 100, 70, 60};
    int a = arr.size();
    for (int i = 0; i < a; i++)
    {
        minHeapify(arr, a, i);
    }
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}