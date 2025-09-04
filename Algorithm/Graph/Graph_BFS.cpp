#include <bits/stdc++.h>
using namespace std;

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
    cin >> source;
    bitset<1000001> mark;
    queue<int> Q;
    vector<int> Bfs;
    Q.push(source);
    Bfs.push_back(source);
    mark[source] = 1;
    while (!Q.empty())
    {
        for (auto u : graph[Q.front()])
        {
            if (!mark[u])
            {
                Q.push(u);
                Bfs.push_back(u);
                mark[u] = 1;
            }
        }
        Q.pop();
    }

    for (auto u : Bfs)
        cout << u << ' ';

    return 0;
}
/*
6 5
1 2
1 3
2 4
2 5
3 6
1

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
*/
