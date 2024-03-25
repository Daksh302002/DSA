#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<string> uset;

    uset.insert("daksh");
    uset.insert("paras");
    uset.insert("sagar");
    uset.insert("ishaan");
    // for (auto it = uset.begin(); it != uset.end(); it++)
    // {
    //     cout << (*it) << " ";
    // }

    // cout << "Size: " << uset.size();

    // uset.erase("daksh");
    // cout << "Size: " << uset.size();

    // if (uset.find("daksh") != uset.end())
    // {
    //     cout << "Name found ";
    // }
    // else
    // {
    //     cout << "not found";
    // }

    // if (uset.count("da"))
    // {
    //     cout << "found";
    // }
    // else
    // {
    //     cout << "not found";
    // }

    uset.clear();

    cout << uset.size();

    return 0;
}