#include <iostream>
#include <vector>
#include <list>
using namespace std;

void show(list<int> l)
{
    list<int>::iterator it;
    for (it = l.begin(); it != l.end(); it++)
    {
        cout << *it << " ";
    }
}

int main()
{
    list<int> list1;
    list<int>::iterator it;
    list1.push_back(9);
    list1.push_back(2);
    list1.push_back(7);
    list1.push_back(-3);

    it = list1.begin();

    // cout << list1.size() << endl;
    // cout << *it;

    show(list1);
    list1.pop_back();
    cout << endl;
    show(list1);
    cout << endl;

    cout << list1.front() << endl;
    cout << list1.back() << endl;

    

    return 0;
}