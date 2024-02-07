#include <iostream>
#include <vector>
#include<unordered_map>
#include<queue>
using namespace std;

bool validPath(int n, vector<vector<int>> &edges, int source, int destination)
{
    unordered_map<int, vector<int>> umap;
    for (auto x : edges)
    {
        vector<int> temp = x;
        int u = temp[0];
        int v = temp[1];
        umap[u].push_back(v);
        umap[v].push_back(u);
    }
    queue<int> q;
    vector<bool> visited(n, false);
    q.push(source);
    visited[source] = true;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        vector<int> temp = umap[v];
        for (int i = 0; i < temp.size(); i++)
        {
            int vertex = temp[i];
            if (visited[vertex] == false)
            {
                q.push(vertex);
                visited[vertex] = true;
            }
        }
    }
    return visited[destination];
}
int main()
{
    return 0;
}