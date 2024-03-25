#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[3][4] = {{4, 5, -7, 1}, {0, 3, 8, 12}, {7, 3, 12, 5}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}