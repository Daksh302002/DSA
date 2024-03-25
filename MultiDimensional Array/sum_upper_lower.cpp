#include <iostream>
#include <vector>
using namespace std;

vector<int> sumTriangle(vector<vector<int>> &matrix, int n)
{
    vector<int> ans;

    int sum_lower = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            sum_lower += matrix[i][j];
        }
    }

    // upper sum
    int sum_upper = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            sum_upper += matrix[i][j];
        }
    }

    ans.push_back(sum_lower);
    ans.push_back(sum_upper);
    for (auto x : ans)
    {
        cout << x << " ";
    }
}

int main()
{
    int n = 3;
    vector<vector<int>> matrix(n, vector<int>(n));

    matrix = {{6, 5, 4}, {1, 2, 5}, {7, 9, 7}};

    sumTriangle(matrix, n);
    return 0;
}