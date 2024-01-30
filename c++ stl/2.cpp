#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for (auto x : v)
    {
        cout << x << " ";
    }

    cout << endl;
    v.pop_back(); //   5 pop hoga
    // v.pop_back();    4 pop hoga
    // v.pop_back();    3 pop hoga
    // v.pop_back();    2 pop hoga
    // v.pop_back();    1 pop hoga

    for (auto x : v)
    {
        cout << x << " ";
    }

    return 0;
}

