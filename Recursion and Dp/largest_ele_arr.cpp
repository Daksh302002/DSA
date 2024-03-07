#include <iostream>
#include <vector>
using namespace std;

int largest(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return arr[0];
    }
    return max(largest(arr, n - 1), arr[n - 1]);
}

int main()
{
    int n = 5;
    int arr[] = {1, 8, 7, 56, 90};
    cout << largest(arr, n);
    return 0;
}