#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
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
    insertion_sort(arr, size);
    cout << endl;
    cout << "The array after  sorted is " << endl;
    print(arr, size);
}

// Time Complexity =o(n^2);