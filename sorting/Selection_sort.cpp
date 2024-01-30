#include <iostream>
#include <vector>
using namespace std;

void selection_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int minIndex = i;
        for (int j = i; j <= n - 1; j++)
        {
            if (arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
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
    selection_sort(arr, size);
    cout << endl;
    cout << "The array after  sorted is " << endl;
    print(arr, size);
}

// Time Complexity =o(n^2);