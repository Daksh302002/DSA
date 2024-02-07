#include <iostream>
#include <vector>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool dfsrecu(vector<int> adj[], int s, vector<bool> &visited, int parent)
{
    visited[s] = true;
    for (auto x : adj[s])
    {
        if (visited[x] == false)
        {
            if (dfsrecu(adj, x, visited, s))
                return true;
        }
        else if (x != parent)
        {
            return true;
        }
    }
    return false;
}

bool DFS(vector<int> adj[], int v, int s)
{
    vector<bool> visited(v, false);
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            if (dfsrecu(adj, i, visited, -1))
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int v = 6;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 4, 5);

    cout << DFS(adj, v, 0);

    return 0;
}