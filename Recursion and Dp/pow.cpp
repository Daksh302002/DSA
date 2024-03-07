#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

long long int power(int N, int R)
{
    if (N == 0)
        return 0;
    if (R == 0)
        return 1;

    return N * (pow(N, R - 1));
}

int main()
{
    cout << power(5, 3);
    return 0;
}