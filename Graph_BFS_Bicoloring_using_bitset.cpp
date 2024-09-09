#include <bits/stdc++.h>
using namespace std;

#define mx 101
bool Bipartite(int n, vector<int> graph[], int source)
{
    queue<int> Q;
    bitset<mx>visited;
    bitset<mx>color;

    color[source] = 1;
    Q.push(source);

    while (!Q.empty())
    {
        int Front = Q.front();
        Q.pop();

        for (auto u : graph[Front])
        {
            if (!visited[u])
            {
                if (color[Front] == 1)
                    color[u] = 0;
                else
                    color[u] = 1;
                Q.push(u); // As u is not visited, push it into queue
                visited[u]=1;
            }
            if (color[Front] == color[u])
                return false;
        }
    }
    return true;
}

int main()
{

    int n, e, source; // number of node, edge & source from where traversing will start
    cin >> n >> e;

    vector<int> graph[n + 1];

    int u, v; // u=row, v=column or starting and ending point
    for (int i = 1; i <= e; ++i)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    (Bipartite(n, graph, 1)) ? cout << "Bipartite\n" : cout << "Not Bipartite\n"; // Here source = 1

    return 0;
}

/*
5 7
1 2
1 3
2 4
2 5
3 4
3 5
4 5
->Not Bipartite

5 6
1 2
1 3
2 4
2 5
3 4
3 5
->Bipartite
*/



