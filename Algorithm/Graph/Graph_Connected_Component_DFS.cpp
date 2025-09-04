/* How many Connected Components in a graph */
// https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/
#include <bits/stdc++.h>
using namespace std;

const int Max = 1e5 + 7;

vector<int> graph[Max];
bitset<Max> visited;

vector<vector<int>> Connected_commponents;
vector<int> current_component;

void dfs(int start)
{
    current_component.push_back(start); //
    visited[start] = 1;
    for (auto u : graph[start])
    {
        if (!visited[u])
            dfs(u);
    }
}

int main()
{
    int n, e, u, v, ans = 0;
    cin >> n >> e;
    for (int i = 0; i < e; ++i)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for (int i = 1; i <= n; ++i)
    {
        current_component.clear(); //
        if (!visited[i])
        {
            ans++;
            dfs(i);
            Connected_commponents.push_back(current_component);
        }
    }
    cout << ans << endl;

    //
    for (auto u : Connected_commponents)
    {
        for (auto v : u)
            cout << v << ' ';
        cout << endl;
    }

    return 0;
}

/*
8 5
1 2
2 3
2 4
3 5
6 7
*/