#include <iostream>
#include <vector>
using namespace std;

void printNos(int n)
{
    if (n == 0)
        return;
    printNos(n - 1);
    cout << n << " ";
}

int main()
{
    printNos(65);
    return 0;
}