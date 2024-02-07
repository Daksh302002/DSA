#include <iostream>
#include <vector>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
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

bool Cycle(vector<int> adj[], int s, vector<bool> &visited, vector<bool> &currVisited)
{
    visited[s] = true;
    currVisited[s] = true;

    for (auto x : adj[s])
    {
        if (visited[x] == false)
        {
            if (Cycle(adj, x, visited, currVisited))
                return true;
        }
        else if (visited[x] == true && currVisited[x] == true)
            return true;
    }
    currVisited[s] = false;
    return false;
}

bool isCycle(vector<int> adj[], int v)
{
    vector<bool> vivisted(v, false), currVisited(v, false);

    for (int i = 0; i < v; i++)
    {
        if (vivisted[i] == false)
        {
            if (Cycle(adj, i, vivisted, currVisited))
                return true;
        }
    }
    return false;
}

int main()
{
    int v = 6;
    vector<int> adj[v];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 3);
    addEdge(adj, 3, 0);
    addEdge(adj, 2, 0);
    addEdge(adj, 4, 5);

    // print(adj, v);

    cout << isCycle(adj, v);

    return 0;
}