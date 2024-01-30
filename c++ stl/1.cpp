#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[7] = {100, 50, 80, 2, 5, 250, 123};
    sort(arr, arr + 7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}