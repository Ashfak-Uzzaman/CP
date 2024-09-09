#include <bits/stdc++.h>
using namespace std;

void bfs(int n, vector<int> graph[], int source)
{
    bitset<1000001> mark;
    int distance[n + 1];
    queue<int> Q;
    vector<int> Bfs;
    Q.push(source);
    Bfs.push_back(source);
    distance[source] = 0;
    mark[source] = 1;
    while (!Q.empty())
    {
        int Front = Q.front();
        Q.pop();
        for (auto u : graph[Front])
        {
            if (!mark[u])
            {
                Q.push(u);
                distance[u] = distance[Front] + 1;
                Bfs.push_back(u);
                mark[u] = 1;
            }
        }
    }

    for (int i = 1; i <= n; i++)
    {
        cout << source << " --> " << i << " = " << distance[i] << endl;
    }
    cout << "BFS:\n";
    for (auto u : Bfs)
        cout << u << ' ';
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
    int source;
    cin >> source;
    bfs(n, graph, source);

    return 0;
}

/*
10 13
1 2
1 4
2 3
2 5
2 7
2 8
3 4
3 9
3 10
5 6
5 7
5 8
7 8
1

6 5
1 2
1 3
2 4
2 5
3 6
1
*/