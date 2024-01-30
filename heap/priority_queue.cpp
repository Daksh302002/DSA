#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    priority_queue<int> pq_max;                            // max heap
    priority_queue<int, vector<int>, greater<int>> pq_min; // min_heap
    pq_max.push(10);
    pq_max.push(15);
    pq_max.push(5);

    pq_min.push(10);
    pq_min.push(15);
    pq_min.push(5);

    // cout << "The size is " << pq_max.size() << endl;
    // cout << "The top is " << pq_max.top() << endl;

    cout << "Max heap: ";
    while (!pq_max.empty())
    {
        cout << pq_max.top() << " ";
        pq_max.pop();
    }
    cout << endl;
    cout << "Min heap: ";
    while (!pq_min.empty())
    {
        cout << pq_min.top() << " ";
        pq_min.pop();
    }

    return 0;
}