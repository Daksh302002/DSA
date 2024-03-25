#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int knapsack(int wt[], int profit[], int maxCapacity, int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(maxCapacity + 1));

    if (n == 0 || maxCapacity == 0)
        return dp[n][maxCapacity] = 0;

    if (maxCapacity >= wt[n - 1])
    {
        return dp[n][maxCapacity] = max(profit[n - 1] + knapsack(wt, profit, maxCapacity - wt[n - 1], n - 1),
                                        knapsack(wt, profit, maxCapacity, n - 1));
    }
    else
    {
        return dp[n][maxCapacity] = knapsack(wt, profit, maxCapacity, n - 1);
    }
}

int main()
{
    int wt[] = {11, 12, 13};
    int profit[] = {70, 20, 50};
    int n = sizeof(profit) / sizeof(profit[0]);
    int maxCapacity = 30;

    cout << "The maximum profit is " << knapsack(wt, profit, maxCapacity, n);

    return 0;
}

/*

where
1. wt[]=weight array
2. profit[]=profit array
3. maxCapacity=kitni capacity aa sakti h
4. n=no of item;


*/