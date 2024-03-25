#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> umap;

    umap["Prince"] = 44;
    umap["GfG"] = 56;
    umap["HelloWorld"] = 90;

    // for (auto it : umap)
    // {
    //     cout << it.first << " ";          // key print hogi .first se
    //     cout << it.second << " " << endl; // value print hogi .second se
    // }

    // for (auto itr = umap.begin(); itr != umap.end(); itr++)
    // {
    //     cout << itr->first << " " << itr->second << endl;
    // }

    string key = "Prince";

    // if (umap.find(key) != umap.end())
    // {
    //     cout << "key found";
    // }
    // else
    // {
    //     cout << "key not found ";
    // }

    // if (umap.find(key) != umap.end())
    // {
    //     auto temp = umap.find(key);
    //     cout << temp->first << " ";
    //     cout << temp->second << " ";
    // }

    // umap.insert(make_pair("mobile", 17000));

    // for (auto temp : umap)
    // {
    //     cout << temp.first << " ";
    //     cout << temp.second << " ";
    // }

    int arr[] = {-1, 2, -1, 3, 2};

    unordered_map<int, int> umaped;

    for (int i = 0; i < 5; i++)
    {
        auto key = arr[i];
        umaped[key]++;
    }

    for (auto it : umaped)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}