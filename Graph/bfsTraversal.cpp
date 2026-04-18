#include <bits/stdc++.h>
using namespace std;

// ✅ Define function outside main
vector<int> bfs(vector<vector<int>> &adj)
{
    vector<int> ans;
    queue<int> q;
    vector<int> vis(adj.size(), 0);

    q.push(0);
    vis[0] = 1;

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        ans.push_back(node);

        for (int i = 0; i < adj[node].size(); i++)
        {
            if (vis[adj[node][i]] == 0)
            {
                vis[adj[node][i]] = 1;
                q.push(adj[node][i]);
            }
        }
    }
    return ans;
}

int main()
{
    // Example graph
    vector<vector<int>> adj = {
        {1, 2},
        {0, 3},
        {0, 4},
        {1},
        {2}
    };

    vector<int> result = bfs(adj);

    for (int node : result)
    {
        cout << node << " ";
    }

    return 0;
}