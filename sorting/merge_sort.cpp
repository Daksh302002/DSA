#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int low, int mid, int high)
{
    int i = low;
    int j = mid + 1;
    int B[high + 1];
    int k = low;

    while (i <= mid && j <= high)
    {
        if (arr[i] < arr[j])
        {
            B[k++] = arr[i++];
        }
        else
        {
            B[k++] = arr[j++];
        }
    }

    while (i <= mid)
    {
        B[k++] = arr[i++];
    }

    while (j <= high)
    {
        B[k++] = arr[j++];
    }

    for (int i = low; i <= high; i++)
    {
        arr[i] = B[i];
    }
}

void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "The array before sorted is " << endl;
    print(arr, size);
    mergeSort(arr, 0, size - 1);
    cout << endl;
    cout << "The array after  sorted is " << endl;
    print(arr, size);
    return 0;
}

// Time Complexity is O(nLogn)