#include <iostream>
#include <vector>
#include <limits.h>
#include <queue>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

vector<int> UnweightedGraph(vector<int> adj[], int v, int s)
{
    vector<int> visited(v, false);
    vector<int> dist(v, INT_MAX);
    dist[s] = 0;

    queue<int> q;
    q.push(s);
    visited[s] = true;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : adj[u])
        {

            if (visited[v] == false)
            {
                dist[v] = dist[u] + 1;
                q.push(v);
                visited[v] = true;
            }
        }
    }

    for (int i = 0; i < dist.size(); i++)
    {
        cout << dist[i] << " ";
    }
}

int main()
{
    int v = 8;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 3);
    addEdge(adj, 1, 2);
    addEdge(adj, 3, 4);
    addEdge(adj, 3, 7);
    addEdge(adj, 4, 5);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);
    addEdge(adj, 7, 6);

    UnweightedGraph(adj, v, 0);

    return 0;
}