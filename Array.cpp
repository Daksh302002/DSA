#include <iostream>
using namespace std;

int search(int arr[], int x)
{
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }       
    return -1;
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "The elements are " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int x;
    cout << "Enter number to search in array " << endl;
    cin >> x;
    cout << search(arr, x);

    return 0;
}