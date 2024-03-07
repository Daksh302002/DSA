#include <iostream>
#include <vector>
using namespace std;

int arrSumRecu(int arr[], int n)
{
    if (n == 0)
        return 0;
    return arr[n - 1] + arrSumRecu(arr, n - 1);
}

int main()
{
    // int n = 5;
    int arr[] = {1, 2, 3, 4, 5};
    cout << arrSumRecu(arr, 5);
    return 0;
}