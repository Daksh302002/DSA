#include <iostream>
#include <vector>
using namespace std;

void bubble_sort(int arr[], int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
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
    bubble_sort(arr, size);
    cout << endl;
    cout << "The array after  sorted is " << endl;
    print(arr, size);
}

// Time Complexity =o(n^2);
// best case time complexity =o(n)