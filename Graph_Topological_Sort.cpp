#include <bits/stdc++.h>
using namespace std;
#define Max 1001
int n, e;
bool visited[Max];
vector<int> graph[Max];
vector<int> ans;

void dfs(int start)
{
    visited[start] = 1;

    for (auto u : graph[start])
    {
        if (!visited[u])
        {
            dfs(u);
        }
    }
    ans.push_back(start);
}

void topological_sort()
{
    memset(visited, false, Max);
    ans.clear();
    for (int i = 0; i < n; ++i)
    {
        if (!visited[i])
            dfs(i);
    }
    reverse(ans.begin(), ans.end());

    for (auto u : ans)
        cout << u << ' ';
    cout << '\n';
}

int main()
{
    cin >> n >> e;

    int u, v;
    cin >> u >> v;
    for (int i = 1; i <= e; ++i)
    {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    topological_sort();

    return 0;
}
