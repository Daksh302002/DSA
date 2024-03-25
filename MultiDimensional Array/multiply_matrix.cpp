#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> multiply(vector<vector<int>> &a, vector<vector<int>> &b)
{
    // ROWS
    int n1 = a.size();
    int n2 = b.size();

    // Col
    int m1 = a[0].size();
    int m2 = b[0].size();

    vector<vector<int>> ans;

    if (m1 == n2)
    {
        for (int i = 0; i < n1; i++)
        {
            vector<int> temp;
            for (int j = 0; j < m2; j++)
            {
                int sum = 0;
                for (int k = 0; k < m1; k++)
                {
                    sum = sum + (a[i][k] * b[k][j]);
                }
                temp.push_back(sum);
            }
            ans.push_back(temp);
        }
    }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[0].size(); j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n1 = 3, m1 = 2, n2 = 2, m2 = 2;
    vector<vector<int>> a(n1, vector<int>(m1));
    vector<vector<int>> b(n2, vector<int>(m2));

    a = {{4, 8}, {0, 2}, {1, 6}};
    b = {{5, 2}, {1, 1}};

    multiply(a, b);

    return 0;
}