#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> &adj, vector<int> &vis, vector<int> &ans, int node = 1)
{
    vis[node] = 1;
    ans.push_back(node);
    for (int i = 0; i < adj[node].size(); i++)
    {
        if (!vis[adj[node][i]])
            dfs(adj, vis, ans, adj[node][i]);
    }
}

int main()
{
    // Example graph
    vector<vector<int>> adj = {
        {},
        {2, 3},
        {1, 5, 6},
        {1, 4, 7},
        {3, 8},
        {2},
        {2},
        {3, 8},
        {4, 7}};
    vector<int> vis(adj.size(), 0);
    vector<int> ans;
    dfs(adj, vis, ans);

    for (int node : ans)
    {
        cout << node << " ";
    }

    return 0;
}