#include <iostream>
#include <vector>
using namespace std;

bool isSubsetSum(int set[], int n, int sum)
{
    if (sum == 0)
        return true;
    if (n == 0)
        return false;

    if (set[n - 1] > sum)
    {
        return isSubsetSum(set, n - 1, sum);
    }
    else
    {
        return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
    }
}

int main()
{
    int set[] = {3, 34, 4, 12, 5, 2};
    int sum = 10;
    int n = sizeof(set) / sizeof(set[0]);

    if (isSubsetSum(set, n, sum))
    {
        cout << "Found a subset with given sum";
    }
    else
    {
        cout << "No subset with given sum";
    }

    return 0;
}