/*         ***BISMILLAHIRRAHMANIRRAHIM***       */
#include <bits/stdc++.h>
using namespace std;

const int inf = 1e9 + 7;
const int Max = 2e5 + 7;

vector<int> dijkstra(vector<pair<int, int>> g[], int n, int source)
{

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

    vector<int> distance(n, inf);

    distance[source] = 0;

    pq.push(make_pair(0, source));

    while (!pq.empty())
    {
        int dis = pq.top().first;
        int node = pq.top().second;
        pq.pop();

        for (auto edge : g[node])
        {
            int newDis = dis + edge.second;
            int child = edge.first;

            if (newDis < distance[child])
            {
                distance[child] = newDis;
                pq.push(make_pair(newDis, child));
            }
        }
    }

    return distance;
}



/*
    Cycle obj;
    bool ans = obj.isCycle(e,graph);
    cout<<ans<<endl;
*/
/*
    Cycle obj;
    bool ans = obj.isCycle(e,graph);
    cout<<ans<<endl;
*/
int main()
{
    int n, e, u, v, c;
    cin >> n >> e;

    vector<pair<int, int>> g[n];

    //  graph's node : 0 to n-1
    for (int i = 0; i < e; ++i)
    {
        cin >> u >> v >> c;
        g[u].push_back(make_pair(v, c));
        g[u].push_back(make_pair(u, c)); // for undirected graph
    }

    vector<int> ans = dijkstra(g, n, 0);

    for (int i = 0; i < n; ++i)
    {
        cout << (ans[i] == inf ? -1 : ans[i]) << endl;
    }

    return 0;
}

/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User Function Template
class Solution
{
public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex S.

    vector<int> dijkstra(vector<vector<pair<int, int>>> &g, int source)
    {

    }
};
//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int V, E;
        cin >> V >> E;
        vector<vector<pair<int, int>>> adj(V);
        int i = 0;
        while (i++ < E)
        {
            int u, v, w;
            cin >> u >> v >> w;
            pair<int, int> t1 = {v, w}, t2 = {u, w};
            adj[u].push_back(t1);
            adj[v].push_back(t2);
        }
        int src;
        cin >> src;
        cin.ignore();

        Solution obj;
        vector<int> res = obj.dijkstra(adj, src);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}*/
// } Driver Code Ends