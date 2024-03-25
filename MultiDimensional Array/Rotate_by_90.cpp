#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Rotate_by_90(vector<vector<int>> &matrix, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    for (int i = 0; i < (n / 2); i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(matrix[i][j], matrix[n - 1 - i][j]); // swap(matrix[0][0],matrix[4][0]);
        }
    }
}

int main()
{
    int n = 3;
    vector<vector<int>> matrix(n, vector<int>(n));
    matrix = {{1, 2, 3},
              {4, 5, 6},
              {7, 8, 9}};

    Rotate_by_90(matrix, n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}