#include <iostream>
using namespace std;
int main()
{
    // int a = 5, *ptr;
    // ptr = &a;
    // cout << a << endl;
    // cout << *ptr << endl;

    // int *var = NULL;
    // cout << *var;

    // int a = 5;
    // void *ptr = &a;
    // cout << *(int *)ptr;

    // int *ptr;
    // cout << *ptr;

    // int *ptr = (int *)malloc(sizeof(int));
    // int a = 5;
    // ptr = &a;
    // free(ptr);
    // cout << *ptr;

    // int arr[3] = {2, 3, 5};
    // int *ptr = &arr[2];
    // for (int i = 0; i < 3; i++)
    // {
    //     cout << *ptr << endl;
    //     ptr--;
    // }
    int arr[7] = {2, 3, 4, 5, 6, 7, 8};
    int *ptr = &arr[6];
    int n = 2;
    for (int i = 0; i < 7; i++)
    {
        cout << *ptr << " ";
        ptr = ptr - n;
    }

    return 0;
}
