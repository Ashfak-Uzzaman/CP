#include <bits/stdc++.h>
using namespace std;
#define Max 1001

vector<int> Graph[Max];

bitset<Max> visited;

bool dfs(int Node, int parent) // O(N+E)
{

    visited[Node] = 1;

    bool isCycleExists = false;

    for (auto child : Graph[Node])
    {
        if (visited[child] and child != parent)
            return true;

        else if (!visited[child])
            isCycleExists |= dfs(child, Node);
    }
    return isCycleExists;
}

int main()
{
    int n, e;
    cin >> n >> e;

    int u, v;
    for (int i = 0; i < e; ++i)
    {
        cin >> u >> v;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }
    bool isCycleExists = false;
    for (int i = 1; i <= n; ++i)
    {
        // cout << "i = " << i << endl;
        if (visited[i])
            continue;

        if (dfs(i, 0))
        {
            isCycleExists = true;
            break;
        }
    }

    if (isCycleExists)
        cout << "Yes\n";
        
    else
        cout << "No\n";

    visited.reset();

    return 0;
}



/* You may build a class:

class Cycle
{
public:
    // Function to detect cycle in an undirected graph.


    bool dfs(int Node, int parent, vector<int> Graph[],bool visited[]) // O(N+E)
    {

        visited[Node] = 1;

        bool isCycleExists = false;

        for (auto child : Graph[Node])
        {
            if (visited[child] and child != parent)
                return true;

            else if (!visited[child])
                isCycleExists |= dfs(child, Node, Graph,visited);
        }
        return isCycleExists;
    }

    bool isCycle(int V, vector<int> adj[])
    {
        // Code here
        bool visited[V+3];
        memset(visited,false,sizeof(visited));
        for (int i = 0; i < V; ++i)
        {
            if (visited[i])
                continue;

            if (dfs(i, -1, adj,visited))
            {
                return true;
            }
        }
        return false;
    }
};

---------------
    Cycle obj;
    bool ans = obj.isCycle(e,graph);
    cout<<ans<<endl;


*/