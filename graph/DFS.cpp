#include <iostream>
#include <vector>
#include <stack>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void print(vector<int> adj[], int v)
{
    for (int i = 0; i < v; i++)
    {
        for (auto x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}

void dfsRecu(vector<int> adj[], int s, vector<bool> &visited)
{
    visited[s] = true;
    cout << s << " ";
    for (auto x : adj[s])
    {
        if (visited[x] == false)
        {
            dfsRecu(adj, x, visited);
        }
    }
}

void dfs(vector<int> adj[], int v, int s)
{
    vector<bool> visited(v, false);

    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            dfsRecu(adj, i, visited);
        }
    }
}

int main()
{
    int v = 5;
    vector<int> adj[5];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 2, 3);
    addEdge(adj, 2, 4);

    print(adj, v);
    // dfs(adj, v, 0);

    return 0;
}