#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main()
{ // rollno,name
    map<int, string> person;

    person.insert({1, "Daksh"});
    person.insert({2, "Sagar"});
    person.insert({3, "Paras"});
    person.insert({4, "Shukla"});
    person.insert({5, "Ishaan"});

    for (auto it = person.begin(); it != person.end(); it++)
    {
        cout << it->first << " " << it->second << " " << endl;
    }

    // auto var = person.begin();
    cout << endl;
    // cout << "By var iterator " << var->first << " " << var->second << " " << endl;

    auto var = person.find(3);

    person.erase(var);

    for (auto it = person.begin(); it != person.end(); it++)
    {
        cout << it->first << " " << it->second << " " << endl;
    }

    return 0;
}
