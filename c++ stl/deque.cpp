#include <iostream>
#include <vector>
#include <deque>
using namespace std;

void print(deque<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop_front();
    }
}

int main()
{
    // deque ka mtlb h ki front se bhi delete aur insert hoga aur back se bhi delete aur insert hoga
    deque<int> dq;

    dq.push_front(1);  // 1
    dq.push_front(14); // 14 1
    dq.push_back(-3);  // 14 1 -3
    dq.push_back(100); // 14 1 -3 100

    print(dq);

    return 0;
}