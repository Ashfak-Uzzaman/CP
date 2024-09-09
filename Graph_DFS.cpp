#include <bits/stdc++.h>
using namespace std;
#define Max 1001

int graph[Max][Max];
vector<int> Graph[Max];
bool visited[Max];
bitset<Max> Visited;

// Ad list
void dfs(int start)
{
    cout << start << ' ';
    Visited[start] = 1;

    for (auto u : Graph[start])
    {
        if (!Visited[u])
        {
            dfs(u);
        }
    }
}

// Ad Matrix
void DFS(int start, int n)
{
    cout << start << ' ';
    visited[start] = 1;

    for (int j = 1; j <= n; j++)
    {
        if (graph[start][j] == 1 and !visited[j])
        {
            DFS(j, n);
        }
    }
}



int main()
{
    int n, e;
    cin >> n >> e;

    int u, v;
    for (int i = 0; i < e; ++i)
    {
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
        Graph[u].push_back(v);
        Graph[v].push_back(u);
    }

    dfs(1);
    cout << '\n';
    DFS(2, n);

    Visited.reset();

    return 0;
}

/*
10 13
1 2
1 4
4 3
2 3
3 9
3 10
2 5
2 7
2 8
5 7
5 8
7 8
5 6

10
13
1 2
1 3
1 4
2 6
3 7
3 8
4 7
5 8
5 10
6 10
7 9
7 8
9 10

*/




