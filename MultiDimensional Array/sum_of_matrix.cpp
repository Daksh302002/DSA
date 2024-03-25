#include <iostream>
#include <vector>
using namespace std;

int sum(int n, int m, vector<vector<int>> &grid)
{
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            sum += grid[i][j];
        }
    }
    return sum;
}

int main()
{
    int n = 2;
    int m = 3;
    vector<vector<int>> grid(n, vector<int>(m));
    grid = {{1, 0, 1}, {-8, 9, -2}};

    cout << sum(n, m, grid);

    return 0;
}