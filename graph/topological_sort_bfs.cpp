#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    // adj[v].push_back(u);
}

vector<int> topologicalSortBFS(vector<int> adj[], int v)
{
    vector<int> ans;
    queue<int> q;
    vector<int> indegree(v, 0);

    for (int i = 0; i < v; i++)
    {
        vector<int> data = adj[i];
        for (auto x : data)
        {
            indegree[x]++;
        }
    }
    for (int i = 0; i < v; i++)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        ans.push_back(u);
        for (auto v : adj[u])
        {
            indegree[v]--;
            if (indegree[v] == 0)
            {
                q.push(v);
            }
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int v = 6;
    vector<int> adj[v];
    addEdge(adj, 5, 2);
    addEdge(adj, 5, 0);
    addEdge(adj, 4, 0);
    addEdge(adj, 4, 1);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 1);

    topologicalSortBFS(adj, v);
    return 0;
}