#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;

    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);

    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << (*it) << " ";
    // }

    // cout << endl;

    // cout << "Number of element: " << s.size();

    // s.clear();
    // cout << endl;
    // cout << "Number of element: " << s.size();

    // if (s.find(10) == s.end())
    // {
    //     cout << "key not found ";
    // }
    // else
    // {
    //     cout << "key found ";
    // }

    s.erase(10);

    cout << s.size();

    return 0;
}